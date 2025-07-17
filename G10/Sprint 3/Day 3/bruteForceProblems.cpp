#include <iostream>
using namespace std;

void cardAndValue(int nums[], int size){

        for(int i=0;i<size-1;i++){

            for(int j = i+1;j<size;j++){

                if(nums[i]*2 == nums[j] || nums[i] == nums[j]*2){
                    cout <<"Yes"<<endl;
                    return;
                }

            }

        }
        cout <<"No"<<endl;
}

int main(){

    int nums[] = {1,3,4,4};
    cardAndValue(nums, 4);

}