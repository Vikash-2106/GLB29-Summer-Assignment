#include <iostream>
#include <vector>
using namespace std;

void MoveZeroes(vector<int>& arr, int n){

    int j = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
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

    MoveZeroes(arr, n);
}