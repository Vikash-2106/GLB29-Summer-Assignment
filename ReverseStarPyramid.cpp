#include <iostream>
using namespace std;

// REVERSE STAR PYRAMID PATTERN

int main(){
    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "  ";
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}