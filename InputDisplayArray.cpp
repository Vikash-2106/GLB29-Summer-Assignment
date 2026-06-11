#include <iostream>
using namespace std;
 
// INPUT AND DISPLAY AN ARRAY
void DisplayArray(int* arr,int n){
   cout << "Array : ";
   for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }
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
    DisplayArray(arr,n);
}