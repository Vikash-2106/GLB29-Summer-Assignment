#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int empID[SIZE];
    string name[SIZE];
    string department[SIZE];
    float salary[SIZE];

    int n = 0, choice;

    do {
        cout << "\n===== Mini Employee Management System =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Update Employee" << endl;
        cout << "5. Delete Employee" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n < SIZE) {
                cout << "Enter Employee ID: ";
                cin >> empID[n];

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, name[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Added Successfully!" << endl;
            }
            else {
                cout << "Record Full!" << endl;
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No Employee Records Found!" << endl;
            }
            else {
                cout << "\nEmployee Records" << endl;
                for (int i = 0; i < n; i++) {
                    cout << "------------------------" << endl;
                    cout << "Employee ID : " << empID[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Department  : " << department[i] << endl;
                    cout << "Salary      : " << salary[i] << endl;
                }
            }
            break;

        case 3: {
            int id, found = 0;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "Employee Found!" << endl;
                    cout << "Name       : " << name[i] << endl;
                    cout << "Department : " << department[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Employee Not Found!" << endl;

            break;
        }

        case 4: {
            int id, found = 0;

            cout << "Enter Employee ID to Update: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {

                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Department: ";
                    getline(cin, department[i]);

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Record Updated Successfully!" << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Employee Not Found!" << endl;

            break;
        }

        case 5: {
            int id, found = 0;

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {

                    for (int j = i; j < n - 1; j++) {
                        empID[j] = empID[j + 1];
                        name[j] = name[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    n--;
                    found = 1;
                    cout << "Employee Deleted Successfully!" << endl;
                    break;
                }
            }

            if (found == 0)
                cout << "Employee Not Found!" << endl;

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