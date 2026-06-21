#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char rev[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        rev[len - 1 - i] = str[i];
    }

    rev[len] = '\0';

    cout << "Reversed string: " << rev;

    return 0;
}