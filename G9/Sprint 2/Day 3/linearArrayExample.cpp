//linearArrayExample.cpp

#include <iostream>
using namespace std;


//Normal Array: Insert an element at index
void insertAtIndex(int arr[], int &n, int index, int value, int capacity) {
    if(n >= capacity) {
        cout << "Array is full. Cannot insert." << endl;
        return;
    }


    if(index > n || index < 0) {
        cout << "Invalid index." << endl;
        return;
    }


    // Shift elements to the right
    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }


    arr[index] = value;
    n++; // Increase the size
    cout << "Element " << value << " inserted at index " << index << endl;
 }


int main(){

//Linear Array: Its an array where data is being stored in the continous format one after the another.
//in c++, we can create array by two ways: 1. using normal array(static array), 2. using vector(dyanamic array)

//static:- fixed size, don't have any method supports

// int nums[] = {1,2,3,4,5,6,7,8,9};
//base address: nums[0] - 1000 + 4bytes ---> 1004 ----> 1008----> 1012

// int *ptr = nums;
// cout <<ptr<<endl; //nums[0]
// cout <<ptr + 1<<endl; //nums[1]
// cout <<ptr + 2<<endl; //nums[2]
// cout <<ptr + 3<<endl; //nums[3]
// cout <<ptr + 4<<endl; //nums[4]
// cout <<ptr + 5<<endl; //nums[5]

// int n = 100;
// int nums[n];

// nums[0] = 10;
// nums[1] = 11;
// nums[2] = 12;

// insertAtIndex(nums, n, 3, 12 , n);

 
}