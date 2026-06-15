#include <iostream>
#include <vector>
#include <algorithm> // For Using reverse function
using namespace std;

void rightRotate(vector<int>& arr, int n, int k){

    if(n > 0)
        k = k % n;

    reverse(arr.begin(), arr.end());

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

     for(int x : arr){
        cout << x << " ";
    }
}

int main(){

    int n, k;

    cout << "Enter size : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Rotation count : ";
    cin >> k;

    rightRotate(arr, n, k);
}