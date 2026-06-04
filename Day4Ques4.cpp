#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (int num = start; num <= end; num++) {
        int temp = num, count = 0, sum = 0;

        // count digits
        int t = temp;
        while (t != 0) {
            count++;
            t /= 10;
        }

        // calculate Armstrong sum
        t = temp;
        while (t != 0) {
            int digit = t % 10;

            int power = 1;
            for (int i = 1; i <= count; i++) {
                power *= digit;
            }

            sum += power;
            t /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}