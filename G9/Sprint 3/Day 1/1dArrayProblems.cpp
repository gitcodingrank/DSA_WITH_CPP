#include <iostream>
#include <vector>
using namespace std;


void insertAtIndex(vector<int> &nums, int value, int index){

    //need to write the implementation
    if(index < 0 || index > nums.size()){
        cout <<"Invalid Index"<<endl;
        return;
    }

    nums.push_back(0);

    // 1 2 3 4 5 0
    for(int i=nums.size()-1;i>index;i--){
        nums[i] = nums[i-1];
    }
    nums[index] = value;
}


int main(){

    vector<int> numbers = {1,2,3,4,5};
    int value = 45;
    int index = 2;

    cout <<"Before Inserting the Element: "<<endl;
    cout <<"Size of Vector: "<<numbers.size()<<endl;
    for(int num: numbers){
        cout <<num<<" ";
    }
    cout <<endl;

    insertAtIndex(numbers, value, index);

    cout <<"After Inserting the Element: "<<endl;
    cout <<"Size of Vector: "<<numbers.size()<<endl;
    for(int num: numbers){
        cout <<num<<" ";
    }

}