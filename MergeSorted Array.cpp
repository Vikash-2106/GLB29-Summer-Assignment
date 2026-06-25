
#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted array to make a sorted array

void merge(vector<int>& arr1, int n, vector<int>& arr2, int m,vector<int>&arr3) {
    int i=0 , j=0;
    int k = 0;
    while(i<n && j<m){
      if(arr1[i]<arr2[j]){
         arr3[k] = arr1[i];
         k++;
         i++;
      }
      else{
         arr3[k] = arr2[j];
         k++;
         j++;
      }
    }

    // Copy the remaining elements of 1st and 2nd  array

    while(i<n){
         arr3[k++] = arr1[i++];
    }
    while(j<m){
         arr3[k++] = arr2[j++];
    }
}

void print(vector<int> &ans , int n){
   cout << "Required sorted elements : ";
   for(int i=0;i<n;i++){
      cout << ans[i] << " ";
   }
   cout << endl;
}

int main() {
    int n,m;
    cout << "Enter size of array1 : ";
    cin >> n;

    vector<int> arr1(n);
    
    cout << "Enter elements of arr1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array2: ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter elements of arr2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

     vector<int> arr3(n+m);
    merge(arr1,n,arr2,m,arr3);
    print(arr3,n+m);
    return 0;
}