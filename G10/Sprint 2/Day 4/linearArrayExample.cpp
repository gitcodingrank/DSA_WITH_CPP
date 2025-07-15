#include <iostream>
using namespace std;

int main(){

    int nums[] = {1,2,3,4,5,6,7,8};  //size: 8*4 -> 32  bytes

    //cout <<sizeof(nums)/sizeof(nums[0])<<endl;

    int *ptr = nums;
    cout << ptr <<endl; //nums[0]
    cout << ptr + 1 <<endl; //nums[0]
    cout << ptr + 2 <<endl; //nums[1]
    cout << ptr + 3 <<endl; //nums[2]
    cout << ptr + 4 <<endl; //nums[3]
    cout << ptr + 5 <<endl; //nums[4]
    cout << ptr + 6 <<endl; //nums[5]


}