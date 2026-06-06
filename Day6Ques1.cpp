//  Decimal to Binary

#include <iostream>
using namespace std;
int main(){  
      int n1,r1,b=0,base1=1;
      cout << "Enter the dec number : ";
      cin >> n1;
    while(n1>0){
        r1=n1%2;
        b=b+(r1*base1);
        n1=n1/2;
        base1=base1*10; // (base of decimal = 10)
    }
    printf("binary value : %d",b);
    return 0;
}