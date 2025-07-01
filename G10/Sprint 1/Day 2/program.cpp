#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){

    //no bound supported in case of normal array:
    // int arr[3] = {1,2,3};
    // cout <<arr[4]<<endl;

    //bound check in case of vector:
    // vector<int> vec(5, 45);

    // // cout <<vec.size()<<endl;
    // cout <<vec.at(6)<<endl;

    //Example

    // vector<vector<int>> vec2D = {{1, 2, 3}, {4, 5, 6}};
    // cout << "2D Vector:\n";
    // for (const auto& row : vec2D) {
    //     for (const auto& elem : row) {
    //         cout << elem << " ";
    //     }
    //     cout << endl;
    // }

    //string: 1.  using c-style, 2. using c++ style(string STL) 
    //c-style:
    //char str[] = "Hello";
    // char str[] = {'H', 'e','l', 'l', 'o', '\0'};
    // cout <<str<<endl; 

    //c++ style: <string> STL(optional)
    // string str = "Hello";
    // cout<<str<<endl;

    //1. Mutable(Changeable)
    // const string str = "Hello";
    //str[0] = 'T';
    //cout<<str<<endl;

    // map<int, int> map1;

    //insert pair/entry
   //syntax:  map1[keyName] = value;
    // map1[1] = 45; //pair 1
    // map1[3] = 67; //pair 2
    // map1[6] = 90; //pair 3

    // //to access the value of the key: need to access using key name
    // cout <<map1.at(5)<<endl; //bound checking

    // map<string, string> map2;

    // //pairs: 2
    // map2.insert({"India", "New Delhi"});
    // map2.insert({"USA", "America"});

    // cout <<map2.at("India");

    // int arr[] = {1,2,3,5,6,7,5,3,2,3};

    // map<int, int> map1;

    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     map1[i] = arr[i];
    // }

    // for(auto &m: map1){
    //     cout << m.first <<"-----"<<m.second<<endl;
    // }

    int arr[] = {1,2,3,5,6,7,5,3,2,3};

    map<int, int> map2;

    for(int ar: arr){
        map2[ar]++;
    }

    for(auto &m: map2){
        cout << m.first <<"-----"<<m.second<<endl;
    }





}