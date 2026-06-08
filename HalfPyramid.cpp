#include <iostream>
using namespace std;

// WAP TO PRINT HALF PYRAMID PATTERN

int main(){
    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

