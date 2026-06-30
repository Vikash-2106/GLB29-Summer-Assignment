#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int roll[SIZE];
    string name[SIZE];
    int age[SIZE];
    float marks[SIZE];

    int n = 0, choice;

    do {
        cout << "\n===== Student Record System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n < SIZE) {
                cout << "Enter Roll No: ";
                cin >> roll[n];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[n]);

                cout << "Enter Age: ";
                cin >> age[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Added Successfully!" << endl;
            } else {
                cout << "Record Full!" << endl;
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No Records Found!" << endl;
            } else {
                cout << "\nStudent Records" << endl;
                for (int i = 0; i < n; i++) {
                    cout << "------------------------" << endl;
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Age     : " << age[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                }
            }
            break;

        case 3: {
            int r, found = 0;
            cout << "Enter Roll No to Search: ";
            cin >> r;

            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "Student Found!" << endl;
                    cout << "Name  : " << name[i] << endl;
                    cout << "Age   : " << age[i] << endl;
                    cout << "Marks : " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Student Not Found!" << endl;

            break;
        }

        case 4: {
            int r, found = 0;
            cout << "Enter Roll No to Update: ";
            cin >> r;

            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Age: ";
                    cin >> age[i];

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated!" << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Student Not Found!" << endl;

            break;
        }

        case 5: {
            int r, found = 0;
            cout << "Enter Roll No to Delete: ";
            cin >> r;

            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    for (int j = i; j < n - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        age[j] = age[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    n--;
                    found = 1;
                    cout << "Record Deleted!" << endl;
                    break;
                }
            }

            if (found == 0)
                cout << "Student Not Found!" << endl;

            break;
        }

        case 6:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}