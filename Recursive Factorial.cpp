#include <iostream>
using namespace std;

// RECURSIVE FACTORIAL

int fac(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Factorial of given number is : "<<fac(n);
}