#include <iostream>
#include <array>
using namespace std;

// Linear Search
void linearsearch(int *arr,int key,int n){
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            cout << "Element is found at postion : "<< i ;
        }
    }
}
int main(){
    int arr[] = {1,2,3,6,8};
    int key;
    cout << "Enter searching elemennts : ";
    cin >> key;
    linearsearch(arr,key,5);
}