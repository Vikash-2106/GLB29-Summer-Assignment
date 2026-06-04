#include<iostream>
using namespace std;

//WAP TO FIND NTH FIBONACCCI TERM

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cout << "Enter the Nth term : ";
    cin>>n;
    cout << "The Nth(starting from 0th term) fibonacci term is : "<<fibo(n);
}