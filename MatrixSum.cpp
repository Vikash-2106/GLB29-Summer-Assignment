#include<iostream>
using namespace std;


//   ***( ADDTION )***
void add(int A[][50],int B[][50]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
       cout << " + " << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "  =  " << endl;

    int sum[50][50];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << sum[i][j] <<" ";
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
   
    cout << "Enter matrix B...\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> B[i][j];
        }
    }

    cout << "The sum of both matrix...\n"; 
    add(A,B);
}