
#include<iostream>
#include<vector>
using namespace std;

//   ***( Rowwise SUM )***

void RowSum(int A[][50],int n){
    int sum = 0 ;
        for(int j=0;j<3;j++){
              sum+=A[n][j];
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
    cout << "Enter row number :  ";
    cin >> n;
   RowSum(A,n);
}