

#include <iostream>
#include <string>
using namespace std;

// REMOVE Duplicates

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            result += str[i];
        }
    }

    cout << "After removing duplicates: " << result;

    return 0;
}