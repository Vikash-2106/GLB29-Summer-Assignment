#include <iostream>
#include <vector>
using namespace std;

void MaxFrequency(vector<int>& arr, int n) {
    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element = " << maxElement << endl;
    cout << "Frequency = " << maxFreq;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    MaxFrequency(arr, n);
}