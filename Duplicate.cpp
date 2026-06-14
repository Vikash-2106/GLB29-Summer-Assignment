#include <iostream>
#include <vector>
using namespace std;

// DUPLICATES
void Duplicates(vector<int>&arr,int n){
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            cout << arr[i] <<" ";
        }
    }
   }
}
int main(){
    int n;
    cout << "Enter size : ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Duplicate elements are ";
    Duplicates(arr,n);
}