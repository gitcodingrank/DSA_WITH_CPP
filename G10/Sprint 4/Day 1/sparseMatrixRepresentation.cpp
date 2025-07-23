#include <iostream>
#include <vector>
using namespace std;

int main(){

    //4*5 sparse matrix
    // int nums[4][5] = {
    //                     {0,0,0,3,2},
    //                     {0,2,0,0,1},
    //                     {0,0,0,0,0},
    //                     {0,4,0,6,0},
    //                 };
    // //Above matrix is using more memory and also taking more time to visit non-zero elements.

    // //1. COO(Co-ordinate list) Triplet Representation in term of 2d array only.
    // int nonZeroElement = 0;
    
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<5;j++){
    //         if(nums[i][j]!=0){
    //             nonZeroElement++;
    //         }
    //     }
    // }

    // //Print Sparse Matrix:

    // //Time Comlexity: O(row * column) // N^2
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<5;j++){
    //         cout <<nums[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }


    // cout <<"-----------------"<<endl;


    // int cooMatrix[nonZeroElement][3];
    // int row = 0;

    //  for(int i=0;i<4;i++){
    //     for(int j=0;j<5;j++){
    //         if(nums[i][j]!=0){
    //             cooMatrix[row][0] = i;
    //             cooMatrix[row][1] = j;
    //             cooMatrix[row][2] = nums[i][j];
    //             row++;
    //         }
    //     }
    // }

    // //Print COO Triplet list:
    // //Time Complexity: O(n)
    // for(int i=0;i<nonZeroElement;i++){
    //     for(int j=0;j<3;j++){
    //         cout <<cooMatrix[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }


    //CSR:
    int nums[4][5] = {
                        {0,0,0,3,2},
                        {0,2,0,0,1},
                        {0,0,0,0,0},
                        {0,4,0,6,0},
                    };
    
    vector<int> values;
    vector<int> colIndex;
    vector<int> rowPtr;

    int count = 0;
    rowPtr.push_back(count);

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(nums[i][j]!=0){
                values.push_back(nums[i][j]);
                colIndex.push_back(j);
                count++;
            }
        }
        rowPtr.push_back(count);
    }

    //CSR: It is best for accessing element through row.
    int index = 1;
    int start = rowPtr[index];
    int end = rowPtr[index + 1];

    for(int i=start;i<end;i++){
        cout <<values[i]<<" ";
    }
    

    

}