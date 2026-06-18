#include<iostream>
using namespace std;


//   ***( SUBTRACTION )***
void subtract(int A[][50],int B[][50]){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
       cout << " - " << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "  =  " << endl;

    int sub[50][50];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sub[i][j] = A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << sub[i][j] <<" ";
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
    subtract(A,B);
}