#include<iostream>
using namespace std;

//WAP TO FIND GCD OF TWO NUMBER
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD = " << a;
    return 0;
}