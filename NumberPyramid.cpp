#include <iostream>
using namespace std;

// NUMBER PYRAMID PATTERN

int main(){
    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<(n-i+1);j++){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k<=i){
                cout << k <<" ";
            }
            else{
               cout << 2*i-k <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}