#include <iostream>
using namespace std;

// FUNCTION TO FIND MAXIMUM
void maximum(int *arr,int n){
   int max = arr[0];
   for(int i=0;i<n;i++){
      if(max<arr[i]){
        max = arr[i];
      }
   }
   cout << max;
} 
int main(){
    int arr[] = {1,2,3,4,6,8};
    cout << "The max value is : ";
    maximum(arr,6);
}