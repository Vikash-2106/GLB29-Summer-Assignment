#include<iostream>
using namespace std;
int main(){
//5.  WAP TO FIND SUM OF DIGITS OF A NUMBER
      int n,sum=0,digits;
      cout << "Enter number : ";
      cin >> n;
      while(n!=0){
        digits = n%10;
        n = n/10;
        sum+=digits;
      }
      cout << "The sum of digits of a number = " <<sum;
return 0;
}