#include <iostream>
using namespace std;

// FUNCTION TO FIND FACTORIAL

int fact(int n){
    int fac = 1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int n,result;
    cout << "Enter number : ";
    cin >> n;
    result = fact(n);
    cout << "The factorial of given number is : "<< result;
}