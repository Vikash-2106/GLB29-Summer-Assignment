#include <iostream>
#include <vector>
using namespace std;

// REVERSE THE ARRAY 
void reverse(vector<int>&arr,int n){
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
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
    cout << "Reverse of elements are ";
    reverse(arr,n);
}