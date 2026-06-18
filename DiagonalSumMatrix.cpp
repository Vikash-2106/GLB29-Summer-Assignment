#include<iostream>
using namespace std;


//   ***( DIAGONAL SUM )***
void diagonalSUM(int A[][50]){
    int diagsum = 0;
     for(int i=0;i<3;i++){
        diagsum+=A[i][i];
     }
    cout << diagsum;
}


int main(){
    int A[50][50],B[50][50];
    cout << "Enter Matrix A ..\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A[i][j];
        }
    }

    cout << "The sum of diagonal of matrix =  "; 
    diagonalSUM(A);
}