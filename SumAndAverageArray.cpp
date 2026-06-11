#include <iostream>
using namespace std;

// Find SUM AND AVERAGE OF ELEMENTS OF ARRAY
int SumOfArray(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
void AverageOfArray(int n,int sum){
    cout << "The average of elements of this array : "<< (sum/n);
}
int main(){
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum = SumOfArray(arr,n);
    cout << "The sum of array elements : "<< sum <<endl;
    AverageOfArray(n,sum);
}