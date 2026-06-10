#include <iostream>
using namespace std;

// FUNCTION FOR PALINDROME 

bool IsPalindrome(int n){
    int  temp = n;
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    }
    if(temp == rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(IsPalindrome(n)){
        cout << "Palindrome number";
    }
    else{
        cout << "Not palindrome ";
    }  
}