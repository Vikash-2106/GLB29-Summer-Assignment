
#include<iostream>
#include<vector>
using namespace std;

//   ***( CHECK SYMMETRIC )***

void checksymmetric(int A[][50]){
       for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(A[i][j]!=A[j][i]){
                cout << "ASYMMETRIC ";
                return;
            }
        }
     }
     cout << " SYMMETRIC ";
}

int main(){
    int A[50][50];
    cout << "Enter Matrix A ..\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A[i][j];
        }
    }
   checksymmetric(A);
}