#include <iostream>
using namespace std;

//  WAP TO COUNT SET BITS IN A NUMBER

int main(){
    int n,count = 0,rem;
    cout << "Enter the  number  : ";
    cin >> n;
    while(n!=0){
        rem=n%2;
        count++;
        n/=2;
    }
    cout << "Number of bits in given dec number is : "<<count;
}