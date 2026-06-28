#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    int bookID;
    string title;
    string author;
    bool issued;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;

        cout << endl;
        cout << "Book Added Successfully!" << endl;
    }

    void displayBook() {
        cout << endl;
        cout << "----- Book Details -----" << endl;
        cout << "Book ID      : " << bookID << endl;
        cout << "Book Title   : " << title << endl;
        cout << "Author       : " << author << endl;
        cout << "Status       : " << (issued ? "Issued" : "Available") << endl;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book Issued Successfully!" << endl;
        } else {
            cout << "Book is already issued!" << endl;
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            cout << "Book Returned Successfully!" << endl;
        } else {
            cout << "Book was not issued!" << endl;
        }
    }
};

int main() {
    Library book;
    int choice;

    do {
        cout << endl;
        cout << "===== Library Management System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Book" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                book.addBook();
                break;

            case 2:
                book.displayBook();
                break;

            case 3:
                book.issueBook();
                break;

            case 4:
                book.returnBook();
                break;

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}