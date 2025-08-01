#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    //A data structure that can store key value pair(entry).
    unordered_map<int, int> uomap = {{1, 14}, {7, 46}, {2,47}, {6, 34}};
    // cout <<uomap.size()<<endl;
    //keys are unique
    //values are duplicate
    cout <<uomap[5]<<endl;



}