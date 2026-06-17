#include<iostream>
#include<vector>
using namespace std;

// Merge of arrays

  void intersect(vector<int> &arr1,int n,vector<int> &arr2,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
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
    intersect(arr1,n,arr2,m);
    return 0;
}
