
#include<iostream>
#include<vector>
using namespace std;

//   ***( MULTIPLICATION )***

void multiply(int A[][50],int B[][50]){
    int sum;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum = 0 ;
            for(int k=0;k<3;k++){
                sum += A[i][k] * B[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main(){
    int A[50][50],B[50][50];
    cout << "Enter Matrix A ..\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A[i][j];
        }
    }
   
    cout << "Enter matrix B...\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> B[i][j];
        }
    }

    cout << "The multiple of both matrix...\n"; 
    multiply(A,B);
}