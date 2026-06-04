#include<iostream>
#include<math.h>
using namespace std;

// WAP TO CHECK ARMSTRONG NUMBER

int main() {
    int n, count = 0;
    cout << "Enter the number : ";
    cin >> n;

    int real = n;

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

    return 0;
}