#include <iostream>
using namespace std;

// WAP TO CHECK THE PERFECT NUMBER

int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin >>  n;
    for(int i=1;i<=n/2;i++){
      if(n%i==0){
        sum+=i;
      }
    }
    if(sum==n){
        cout << "Perfect number";
    }
    else{
        cout << "Not Perfect number";
    }
}