#include <iostream>
using namespace std;

// RECURSIVE FIBONACCI

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else {
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
     int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Recursive fibonacci series : ";
    for(int i=0;i<=n;i++){
        cout << fibo(i) << " ";
    }
    return 0;
}