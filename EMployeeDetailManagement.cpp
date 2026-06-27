#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    string department;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        e[i].input();
    }

    // Display employee details
    cout << "\n===== Employee Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].display();
    }

    return 0;
}