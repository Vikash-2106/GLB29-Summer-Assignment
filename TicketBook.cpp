#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
private:
    string name;
    string destination;
    int tickets;
    float fare;

public:
    void bookTicket() {
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        cout << "Enter Fare Per Ticket: ";
        cin >> fare;

        cout << endl;
        cout << "Ticket Booked Successfully!" << endl;
    }

    void displayTicket() {
        cout << endl;
        cout << "----- Ticket Details -----" << endl;
        cout << "Passenger Name   : " << name << endl;
        cout << "Destination      : " << destination << endl;
        cout << "Number of Tickets: " << tickets << endl;
        cout << "Fare Per Ticket  : " << fare << endl;
        cout << "Total Fare       : " << tickets * fare << endl;
    }

    void cancelTicket() {
        tickets = 0;
        cout << "Ticket Cancelled Successfully!" << endl;
    }
};

int main() {
    TicketBooking ticket;
    int choice;

    do {
        cout << endl;
        cout << "===== Ticket Booking System =====" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. Display Ticket" << endl;
        cout << "3. Cancel Ticket" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ticket.bookTicket();
                break;

            case 2:
                ticket.displayTicket();
                break;

            case 3:
                ticket.cancelTicket();
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