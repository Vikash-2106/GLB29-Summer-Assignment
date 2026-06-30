#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 100;

    int bookID[SIZE];
    string title[SIZE];
    string author[SIZE];
    int quantity[SIZE];

    int n = 0, choice;

    do {
        cout << "\n===== Mini Library System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n < SIZE) {
                cout << "Enter Book ID: ";
                cin >> bookID[n];

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                cout << "Enter Quantity: ";
                cin >> quantity[n];

                n++;
                cout << "Book Added Successfully!" << endl;
            }
            else {
                cout << "Library Full!" << endl;
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No Books Available!" << endl;
            }
            else {
                cout << "\nBook Records" << endl;
                for (int i = 0; i < n; i++) {
                    cout << "------------------------" << endl;
                    cout << "Book ID : " << bookID[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                }
            }
            break;

        case 3: {
            int id, found = 0;
            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    cout << "Book Found!" << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Book Not Found!" << endl;

            break;
        }

        case 4: {
            int id, found = 0;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    found = 1;

                    if (quantity[i] > 0) {
                        quantity[i]--;
                        cout << "Book Issued Successfully!" << endl;
                    }
                    else {
                        cout << "Book Not Available!" << endl;
                    }
                    break;
                }
            }

            if (found == 0)
                cout << "Book Not Found!" << endl;

            break;
        }

        case 5: {
            int id, found = 0;
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    quantity[i]++;
                    found = 1;
                    cout << "Book Returned Successfully!" << endl;
                    break;
                }
            }

            if (found == 0)
                cout << "Book Not Found!" << endl;

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