#include <iostream>
#include <vector>
using namespace std;

void DescendingSort(vector<int>& arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Array in Descending Order: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    DescendingSort(arr, n);

    return 0;
}