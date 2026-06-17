#include<iostream>
using namespace std;

// INSERTION SORT (Isme swap nhi shift krte hain)

void Insertionsort(int *arr,int n){
   for(int i=1;i<n;i++){
      int temp = arr[i];
      int j=i-1;
      for(;j>=0;j--){
         if(temp<arr[j]){
            // shift
            arr[j+1] = arr[j];
         }
         else{
            break;
         }
      }
      arr[j+1] = temp;
   }
             for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
}
int main(){
  int n;
  int arr[] = {2,3,1,4,6,5};
  Insertionsort(arr,6);
return 0;
}
