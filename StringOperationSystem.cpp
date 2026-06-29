#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====" << endl;
        cout << "1. Enter String" << endl;
        cout << "2. Display String" << endl;
        cout << "3. Find Length" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Convert to Uppercase" << endl;
        cout << "6. Convert to Lowercase" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String: " << str << endl;
            break;

        case 3:
            cout << "Length = " << str.length() << endl;
            break;

        case 4: {
            string temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;
        }

        case 5:
            for (int i = 0; i < str.length(); i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            cout << "Uppercase String: " << str << endl;
            break;

        case 6:
            for (int i = 0; i < str.length(); i++) {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
            }
            cout << "Lowercase String: " << str << endl;
            break;

        case 7:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}