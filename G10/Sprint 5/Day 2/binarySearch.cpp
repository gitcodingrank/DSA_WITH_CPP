#include <iostream>
#include <vector>
using namespace std;


//Time Complexity: O(n)
int lenearSearch(int arr[], int key, int n){
    for(int i=0;i<n;i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

//Time Complexity: O(logn)
int binarySearch(int arr[], int key, int n){
    int left = 0;
    int right = n-1;
    
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid] > key){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return -1;
}

void printArrayElement(int arr[], int index ,int size){
    
    if(index > size-1){
        return;
    }
    cout <<arr[index]<<" ";
    printArrayElement(arr, index + 1, size);
}

int sumArrayElement(int arr[], int index ,int size){
    
    if(index > size-1){
        return 0;
    }
    return arr[index] + sumArrayElement(arr, index + 1, size);
}

int recursiveBinarySearch(int arr[], int left, int right, int key){
    
    if(left > right) return -1;

    int mid = (left + right) / 2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] > key){
        return recursiveBinarySearch(arr, left, mid-1, key);
    }else{
        return recursiveBinarySearch(arr, mid + 1, right, key);
    }
}

int findFirstOccurence(vector<int> &arr, int target){

    //{1, 2, 3, 3, 3,3,3, 4, 5}, target = 3, result=-1;
    int low = 0, high = arr.size()-1, result=-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            result= mid;
            low=mid+1;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

int main(){

    //Problem: Find out the index of given element if it is not there return -1
    //Sorted Array:
    // int nums[] = {1,2,3,4,5,6,7,8,9,10};
    // int nums[1000000] = {0};
    // int key = 11;

    // //cout <<lenearSearch(nums, key, 10)<<endl;
    // cout <<binarySearch(nums, key, 10)<<endl;

    // printArrayElement(nums, 0, 10);
    // cout <<endl;

    // cout <<sumArrayElement(nums, 0, 10)<<endl;

    vector<int> arr  =  {1, 2, 3, 3, 3, 4, 5};
    cout<<findFirstOccurence(arr, 3)<<endl;


    
    

}