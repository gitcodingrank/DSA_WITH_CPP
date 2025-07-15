#include <iostream>
#include <vector>
#include <map>
using namespace std;


//You're given a function, your task is to implement this.
void insertElementAtIndex(vector<int> &nums, int value, int index){

    if(index > nums.size() || index < 0){
        cout <<"Invalid Index"<<endl;
        return;
    }

    nums.push_back(0);

    //Elements: 1  2  3  4  5  0
    //Index:    0  1  2  3  4  5

    for(int i = nums.size()-1;i>index;i--){
        nums[i] = nums[i-1];
    }
    nums[index] = value;

}

void findFreequencyOfElement(vector<int> &nums){
    /*
    Arr  = [1,2,3,2,1,5,4,7]
    1: 2
    2: 2
    3: 1
    5: 1
    4: 1
    7: 1
    */
    map<int, int> freq;

    for(int i=0;i<nums.size();i++){
        // if(freq[nums[i]]==0){
        //     freq[nums[i]] = 1;
        // }else{
        //     freq[nums[i]] = freq[nums[i]] + 1;
        // }

        freq[nums[i]]++;
    }

    for (const auto& pair : freq) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }


}

int main(){

    //vector<int> numbers = {1,2,3,4,5};


    // cout <<"Before Adding: "<<endl;
    // cout <<"Size of Vector: "<<numbers.size()<<endl;
    // for(int num: numbers){
    //     cout <<num<<" ";
    // }
    // cout <<endl;

    // insertElementAtIndex(numbers, 45, 2);

    //  cout <<"After Adding: "<<endl;
    //  cout <<"Size of Vector: "<<numbers.size()<<endl;
    // for(int num: numbers){
    //     cout <<num<<" ";
    // }
    // cout <<endl;


    vector<int> numbers = {1,2,3,4,5,4,3,1};
    findFreequencyOfElement(numbers);


}