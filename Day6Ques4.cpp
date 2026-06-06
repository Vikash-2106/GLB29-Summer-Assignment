#include <iostream>
using namespace std;

// WAP TO FIND X^n WITHOUT POWER

int main(){
    int x,n,ans=1;
    
    cout << "Enter the  number  : ";
    cin >> x;
    cout << "Enter the  power  : ";
    cin >> n;
    int i=1;
    while(i<=n){
        ans*=x;
        i++;
    }
    cout << "Value of x^n :"<<ans;
}