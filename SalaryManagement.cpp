#include <iostream>
#include <string>
using namespace std;

class Salary {
public:
    int id;
    string name;
    float basicSalary, bonus, deduction, netSalary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Bonus: ";
        cin >> bonus;

        cout << "Enter Deduction: ";
        cin >> deduction;
    }

    void calculate() {
        netSalary = basicSalary + bonus - deduction;
    }

    void display() {
        cout << "\nEmployee ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus       : " << bonus << endl;
        cout << "Deduction   : " << deduction << endl;
        cout << "Net Salary  : " << netSalary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Salary s[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        s[i].input();
        s[i].calculate();
    }

    cout << "\n===== Salary Report =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}