#include <iostream>
#include <vector>
using namespace std;

// Second LARGEST ELEMENT
void secondlargest(vector<int> &arr,int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int secondmax = arr[0];
    for(int i=0;i<n;i++){
        if(secondmax<arr[i] && arr[i]!=max){
            secondmax = arr[i];
        }
    }
    cout << "Second largest element is "<<secondmax;
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
  secondlargest(arr,n);
}