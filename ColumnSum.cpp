
#include<iostream>
#include<vector>
using namespace std;

//   ***( Columnwise SUM )***

void ColumnSum(int A[][50],int n){
    int sum = 0 ;
        for(int i=0;i<3;i++){
              sum+=A[i][n];
            }
        cout << "Sum of given row is "<< sum;
     }

int main(){
    int A[50][50],n;
    cout << "Enter Matrix A ..\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter column number :  ";
    cin >> n;
    ColumnSum(A,n);
}