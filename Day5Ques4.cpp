#include <iostream>
using namespace std;

// WAP TO FIND LARGEST PRIME FACTOR

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = -1;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {

            int prime = 1;

            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if(prime == 1)
                largest = i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}