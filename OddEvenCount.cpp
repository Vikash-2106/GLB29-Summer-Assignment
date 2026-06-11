#include <iostream>
using namespace std;

// COUNT EVEN AND ODD ELEMENTS OF ARRAY
void CountEvenOdd(int*arr,int n){
    int countEven = 0;
    int countOdd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    cout << "The number of even elements are "<<countEven<<endl;
    cout << "The number of odd elements are "<<countOdd<<endl;
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
    CountEvenOdd(arr,n);
}