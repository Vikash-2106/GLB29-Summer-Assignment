#include <iostream>
using namespace std;

// WAP TO print prime factors of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Prime factors are : ";
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) { 
            int j;  
            for(j = 2; j < i; j++) {
                if(i % j == 0)
                    break;
            }
            if(j == i)
                cout << i << " ";
        }
    }
    return 0;
}