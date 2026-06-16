#include <iostream>
#include <vector>
using namespace std;

// Find missing element in an array

void MissingElement(vector<int>&arr,int n){
  // Going with sum formula approach

  int start = arr[0];
  int end = arr[n-1];
  int terms = end-start+1;
  int actualSum = 0;
  int expectedSum = (terms)*(start+end)/2;
  for(int i=0;i<n;i++){
      actualSum+=arr[i];
  }
  cout << "Missing element = "<< (expectedSum - actualSum);
}

int main(){

    int n;

    cout << "Enter size : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    MissingElement(arr, n);
}