#include <iostream>
using namespace std;

// Check Palindrome

int checkPalindrome(char name[],int n){
  int s = 0,e = n-1;
  while(s<=e){
    if(name[s++]!=name[e--]){
      return 0;
    }
  }
  return 1;
}
int getLength(char name[]){
      int count = 0;
      for(int i=0;name[i] != '\0';i++){
        count++;
      }
      return count;
    }

int main(){
    char name[20];
    cout << "Enter your name :  ";
    cin >> name;
    int len = getLength(name);
    if(checkPalindrome(name,len)){
       cout << "Palindrome String";
    }
    else {
       cout << "NOT Palindrome String";
    }
}