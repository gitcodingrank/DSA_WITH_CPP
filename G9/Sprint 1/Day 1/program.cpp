#include <iostream>
#include <map>
using namespace std;

int main(){

    //map: it is used to store the key-value pair where you can access the value by key-name
    map<int, string> map1;

    //inserting the pairs:
    //syntax: map1[key] = value;
    // map1[1] = "India"; //pair 1
    // map1[2] = "USA"; //pair 2

    // // //How many Pairs/Entiries = 2
    // // cout <<map1[1]<<endl;
    // // // cout <<map1.at(4)<<endl;

    // // cout <<map1.size()<<endl;

    //  for (const auto& pair : map1) {
    //     cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    // }

    int nums[] = {1,2,3,2,3,1,2};

    map<int, int> freq;

    for(int num: nums){
        if(freq.find(num)!=freq.end()){
            freq[num] = 1;
        }else{
            freq[num] = freq[num] + 1;
        }
    }

     for (const auto& pair : freq) {
        cout <<pair.first <<"----"<<pair.second << endl;
    }


}