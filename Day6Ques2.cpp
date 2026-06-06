#include <iostream>
using namespace std;

// BINARY TO DECIMAL
    int main(){
    int n,r,dec=0,base=1;
     cout << "Enter the binary number : ";
      cin >> n;
    while(n>0){
        r=n%10;
        dec=dec+(r*base);
        n=n/10;
        base=base*2; // (base of binary = 2)
    }
    cout << "Decimal value : "<<dec;
}