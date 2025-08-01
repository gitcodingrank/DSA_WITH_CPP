#include <iostream>
using namespace std;


void bubbleSortAlgorithm(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            //ascending order
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
            if(!flag) break;
            //descending order
            // if(arr[j] < arr[j+1]){
            //     swap(arr[j], arr[j+1]);
            // }
        }
    }
}


void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i]; //pick the element to arrange on currect position
        int j = i-1;
        
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

     }
}


void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[smallIndex] > arr[j]){
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
    }
}

int main(){

    int nums[] = {6,7,5,3,8,1};

    cout <<"Before Sorting: "<<endl;
    for(int num: nums){
        cout <<num<<" ";
    }
    cout <<endl;

    //bubbleSortAlgorithm(nums, 6);
    //insertionSort(nums, 6);      
    selectionSort(nums, 6);      
    
    cout <<"After Sorting: "<<endl;
    for(int num: nums){
        cout <<num<<" ";
    }
    cout <<endl;
}