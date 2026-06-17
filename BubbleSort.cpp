#include <iostream>
using namespace std;

// BUBBLE SORT

void Bubblesort(int *arr,int n){
      for(int i=1;i<n;i++){
         for(int j=0;j<n-i;j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           }
         }
      }
         for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
}
int main(){
  int n;
  int arr[] = {2,3,1,4,6,5};
  Bubblesort(arr,6);
return 0;
} 
