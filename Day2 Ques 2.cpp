#include<iostream>
using namespace std;

// WAP TO PRINT REVERSE OF A NUMBER
int main(){
    int n , digit , rev=0;
    cout << "enter the number : ";
    cin >> n;
  while(n!=0){
    digit = n%10;
    rev = rev*10 + digit;
    n/=10;
  }
  cout << "The reverse of the given number is "<< rev;
}