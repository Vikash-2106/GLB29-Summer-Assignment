#include <iostream>
#include <math.h>
using namespace std;

// FUNCTION FOR ARMSTRONG
void ArmstrongCheck(int n){
    int real = n;
    int count = 0;
    // Count digits
    while (n != 0) {
        count++;
        n /= 10;
    }

    int temp = real, ans = 0;

    // Armstrong calculation
    while (temp != 0) {
        int digit = temp % 10;
        ans = ans + (int)round(pow(digit, count));
        temp /= 10;
    }

    if (ans == real) {
        cout << "The given number is Armstrong number";
    }
     else {
        cout << "Not Armstrong";
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    ArmstrongCheck(n);
    return 0;
}