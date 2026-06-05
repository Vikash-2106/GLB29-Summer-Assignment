#include <iostream>
using namespace std;

// WAP TO CHECK A STRONG NUMBER
int fac(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin >>  n;
    int original = n;
    while(n!=0){
        int digit = n%10;
        sum += fac(digit);
        n/=10;
    }
    if(sum == original){
        cout << "Strong number";
    }
    else{
        cout << "Not Strong number";
    }
}