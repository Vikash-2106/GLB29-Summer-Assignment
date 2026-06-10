#include <iostream>
using namespace std;

// FUNCTION TO CHECK PRIME

bool isprime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(isprime(n)){
        cout << "Prime number";
    }
    else{
        cout << "Not prime ";
    }
}