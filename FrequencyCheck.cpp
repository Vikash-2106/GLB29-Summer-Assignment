#include <iostream>
using namespace std;

// FREQUENCY OF AN ELEMENT
void frequency(int *arr,int n,int key){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout << "The frequency of this element is "<<count;
}
int main(){
    int n,key;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter element : ";
    cin >> key;
    frequency(arr,n,key);
}