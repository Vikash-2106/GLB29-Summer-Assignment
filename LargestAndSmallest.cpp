#include <iostream>
using namespace std;

// LARGEST AND SMALLEST ELEMENT OF ARRAY
void LargestAndSmallestElement(int *arr,int n){
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout << "The largest element : "<<max<<endl;
    cout << "The smallest element : "<<min<<endl;
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
    LargestAndSmallestElement(arr,n);
}