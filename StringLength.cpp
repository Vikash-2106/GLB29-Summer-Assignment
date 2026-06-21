#include <iostream>
using namespace std;

// FIND LENGTH  OF STRING WITHOUT STRLEN FUNCTION

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of string = " << length;

    return 0;
}