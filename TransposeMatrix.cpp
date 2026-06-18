#include<iostream>
using namespace std;


//   ***( TRANSPOSE )***
void transpose(int A[][50]){
     for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(A[i][j],A[j][i]);
        }
     }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] <<" ";
        }
        cout<<endl;
    }
  return;  
}


int main(){
    int A[50][50],B[50][50];
    cout << "Enter Matrix A ..\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A[i][j];
        }
    }

    cout << "The transpose of  matrix...\n"; 
    transpose(A);
}