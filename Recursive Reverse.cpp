#include <iostream>
using namespace std;

// RECURSIVE REVERSE THE NUMBER

void reverse(int n){
   if(n < 10){
      cout << n;
      return;
   }

   cout << n % 10;
   reverse(n / 10);
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Recursive reverse of digits : ";
    reverse(n);
}