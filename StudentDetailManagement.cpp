#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    cin.ignore();

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].roll;
        cin.ignore();

        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Marks: ";
        cin >> s[i].marks;
        cin.ignore();
    }

    // Display
    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << s[i].roll << endl;
        cout << "Name        : " << s[i].name << endl;
        cout << "Marks       : " << s[i].marks << endl;
    }

    return 0;
}