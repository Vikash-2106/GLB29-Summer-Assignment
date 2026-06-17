#include <iostream>
#include <vector>
using namespace std;

void CommonElement(vector<int>& arr, int& n) {
    cout << "Common element : ";
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
     if(arr[i]==arr[j]){
       cout << arr[i] << " ";
       break;
    }
   }
 }
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    CommonElement(arr, n);
    return 0;
}