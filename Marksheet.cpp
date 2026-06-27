#include <iostream>
#include <string>
using namespace std;

class Marksheet {
public:
    int roll;
    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate() {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\nRoll Number : " << roll << endl;
        cout << "Name        : " << name << endl;
        cout << "Total Marks : " << total << "/500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Marksheet s[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].input();
        s[i].calculate();
    }

    cout << "\n===== Student Marksheet =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}