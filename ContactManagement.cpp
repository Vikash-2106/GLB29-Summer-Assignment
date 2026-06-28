#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string name;
    string phone;
    string email;

public:
    void addContact() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << endl;
        cout << "Contact Added Successfully!" << endl;
    }

    void displayContact() {
        cout << endl;
        cout << "----- Contact Details -----" << endl;
        cout << "Name         : " << name << endl;
        cout << "Phone Number : " << phone << endl;
        cout << "Email        : " << email << endl;
    }

    void updateContact() {
        cin.ignore();

        cout << "Enter New Name: ";
        getline(cin, name);

        cout << "Enter New Phone Number: ";
        getline(cin, phone);

        cout << "Enter New Email: ";
        getline(cin, email);

        cout << "Contact Updated Successfully!" << endl;
    }
};

int main() {
    Contact contact;
    int choice;

    do {
        cout << endl;
        cout << "===== Contact Management System =====" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display Contact" << endl;
        cout << "3. Update Contact" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                contact.addContact();
                break;

            case 2:
                contact.displayContact();
                break;

            case 3:
                contact.updateContact();
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}