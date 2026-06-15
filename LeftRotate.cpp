#include <iostream>
#include <vector>
using namespace std;

// ROTATE THE ARRAY LEFT
void leftrotate(vector<int>&arr,int n,int k){
    if(n>0){
        k = k % n ;
    }
    for(int j=1;j<=k;j++){
       int temp = arr[0];
        for(int i=0;i<n-1;i++){
           arr[i] = arr[i+1];
    }
      arr[n-1] = temp;
   }
   for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }
}
int main(){
    int n,k;
    cout << "Enter size : ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Rotation count : ";
    cin >> k;
    cout << "Rotation of elements are ";
    leftrotate(arr,n,k);
}