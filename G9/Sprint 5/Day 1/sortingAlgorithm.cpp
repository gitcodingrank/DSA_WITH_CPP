//sortingAlgorithm.cpp

#include <iostream>
using namespace std;


void bubbleSort(int arr[], int size){
    for(int i=0;i<size - 1; i++){
        for(int j = 0; j<size - i -1; j++){
            //Ascending Order
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){

    int nums[] = {5, 4, 8, 2, 3};
    int size = 5;

    
    for(int num: nums){
        cout <<num<<" ";
    }

    cout <<endl<<"-------"<<endl;

    bubbleSort(nums, size);

    for(int num: nums){
        cout <<num<<" ";
    }

}