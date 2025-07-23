#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){

    /*
    Arr = 1 2 3
          i
          j
    n(n+1)/2 ===> n^2
    */ 

    //Brute Force
    // int nums[] = {1,2,3};
    // for(int i=0;i<3;i++){
    //     for(int j=i;j<3;j++){
    //         for(int k = i;k<=j;k++){
    //             cout <<nums[k]<<" ";
    //         }
    //         cout <<endl;
    //     }
    // }

    //Problem: Find count of such sub-array whose sum is 5
    // int nums[] = {1,2,3};
    // int count = 0;
    // for(int i=0;i<3;i++){
    //     for(int j=i;j<3;j++){
    //         int sum = 0;
    //         for(int k = i;k<=j;k++){
    //             sum+=nums[k];
    //         }
    //         if(sum==5) count++;
    //     }
    // }
    // cout <<"Count is: "<<count<<endl;

    // unordered_map<char, int> charMap;
    // charMap['C'] = 1;
    // charMap['D'] = 2;
    // charMap['A'] = 3;

    // for(const auto &m: charMap){
    //     cout <<m.first<<"-----"<<m.second<<endl;
    // }

    int nums[] = {2,1,5,1,3,2};
    int n = 6;
    int k = 3;
    
    int sum = 0;
    int maxSum = -1;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    if(maxSum<sum){
        maxSum = sum;
    }

    for(int i=k;i<n;i++){
        sum+=nums[i]-nums[i-k];
        if(maxSum<sum){
            maxSum = sum;
        }
    }

    cout <<"Max Sum: "<<maxSum;

}