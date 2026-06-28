#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << endl;
        cout << "Account Created Successfully!" << endl;
    }

    void deposit() {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayAccount() {
        cout << endl;
        cout << "----- Account Details -----" << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << endl;
        cout << "===== Bank Account System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.displayAccount();
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