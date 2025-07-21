#include <iostream>
using namespace std;

void convertToCOO(int sparse[4][5], int row, int column){

    int nonZero = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(sparse[i][j]!=0){
                nonZero++;
            }
        }
    }

    //Coordinate List(COO):
    int cooMatrix[nonZero][3];
    //Row | Column | Value
    // 
    int r = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(sparse[i][j]!=0){
                cooMatrix[r][0] = i;
                cooMatrix[r][1] = j;
                cooMatrix[r][2] = sparse[i][j];
                r++;
            }
        }
    }

    //Let's print the element from cooMatrix:
    cout <<"Row Column Value"<<endl;
    for(int i=0;i<nonZero;i++){
        for(int j=0;j<3;j++){
            cout <<cooMatrix[i][j]<<" ";
        }
        cout <<endl;
    }

}

int main(){

    int sparseMatrix[4][5] = {
                                {0,0,3,0,4},
                                {0,0,5,7,0},
                                {0,0,0,0,0},
                                {0,2,6,0,0},
                            };
    convertToCOO(sparseMatrix, 4, 5);

}