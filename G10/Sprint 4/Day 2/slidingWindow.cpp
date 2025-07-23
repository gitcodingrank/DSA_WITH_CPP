#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    /*
    
    Arr = 1 2 3
          i
          j
    
    */

    // int nums[] = {1,2,3};
    // int n = sizeof(nums)/sizeof(nums[0]);

    // // //Problem Statement: Find all possible sub array of given array 'nums':
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         //Banda - Will collect element till i <= j
    //         for(int k=i;k<=j;k++){
    //             cout <<nums[k]<<" ";
    //         }
    //         cout <<endl;
    //     }
    // }


    //Problem Statement: Find Sum of All Subarray and Print
    // int nums[] = {1,2,3};
    // int n = sizeof(nums)/sizeof(nums[0]);

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         //Banda - Will collect element till i <= j
    //         int sum = 0;
    //         for(int k=i;k<=j;k++){
    //             sum+=nums[k];
    //         }
    //         cout <<sum<<endl;
    //     }
    // }

    /*
    Expected Output:
    1
    3
    6
    2
    5
    3
    */


    //map vs unordered_map
    // map<char, int> charMap;
    // charMap['C'] = 3;
    // charMap['B'] = 2;
    // charMap['A'] = 1;
    // charMap['D'] = 4;

    // //  charMap - {{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}}
    // //Note: it stores key-value value pair in sorted order of key (by default ascending)

    // for(const auto &m: charMap){
    //     cout <<m.first<<"---------"<<m.second<<endl;
    // }

    // unordered_map<char, int> charMap;
    // charMap['C'] = 3;
    // charMap['B'] = 2;
    // charMap['A'] = 1;
    // charMap['D'] = 4;

    // //  charMap - {{'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}}
    // //Note: it stores key-value value pair in sorted order of key (by default ascending)

    // for(const auto &m: charMap){
    //     cout <<m.first<<"---------"<<m.second<<endl;
    // }


    //Problem: Max Subarray sum with k
    int nums[] = {2,1,5,1,3,2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 3;
    int maxSum = -1;

    // //Problem Statement: Find all possible sub array of given array 'nums':
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //Banda - Will collect element till i <= j
            int count = 0;
            int sum = 0;
            for(int k=i;k<=j;k++){
                count++;
                sum+=nums[k];
            }
            if(count == k){
                if(sum > maxSum){
                    maxSum = sum;
                }
            }
        }
    }
    cout <<"Max Sum: "<<maxSum<<endl;


    //Above Problem using Sliding Window:
    int nums[] = {2,1,5,1,3,2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 3;

    int sum = 0;
    int maxSum  = -1;

    for(int i=0;i<k;i++){
        sum+=nums[i];
    }

    if(maxSum < sum){
        maxSum = sum;
    }

    for(int i=k;i<n;i++){
        sum+=nums[i] - nums[i-k];
        if(maxSum < sum){
             maxSum = sum;
         }
    }
    cout <<"Max Sum: "<<maxSum<<endl;


}