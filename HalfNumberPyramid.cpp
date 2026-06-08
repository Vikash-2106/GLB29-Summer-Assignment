#include <iostream>
using namespace std;

// HALF NUMBER PYRAMID

int main(){
    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

