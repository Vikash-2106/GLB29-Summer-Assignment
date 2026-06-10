#include <iostream>
using namespace std;

// WAP to write functions to find sum of two numbers

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b,result;
    cout << "enter two number : ";
    cin >> a >> b;

    result = sum(a,b);

    cout <<"The summ of two number : " result;
}