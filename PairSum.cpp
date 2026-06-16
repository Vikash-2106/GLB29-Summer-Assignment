#include <iostream>
#include <vector>
using namespace std;

// FIND PAIR WHOSE SUM IS EQUAL TO REQUIRED SUM 

void ReqPair(vector<int>& arr, int n) {
    int k;
    cout << "Enter ReqSum : ";
    cin >> k;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == k) {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }

        }
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ReqPair(arr, n);
}