#include<iostream>
using namespace std;

// WAP TO CHECK WHETHER THE NUMBER IS PRIME
int checkprime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin>>n;
    if(checkprime(n)){
        cout<<"The given number is not prime ";
    }
    else{
        cout << "This is a prime number";
    }
    return 0;
}