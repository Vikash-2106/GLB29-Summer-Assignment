#include <iostream>
using namespace std;

class Inventory {
public:
    int id, quantity;
    string name;
    float price;

    void input() {
        cout << "Enter Product ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Product Price: ";
        cin >> price;

        cout << "Enter Product Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nProduct ID      : " << id << endl;
        cout << "Product Name    : " << name << endl;
        cout << "Product Price   : " << price << endl;
        cout << "Product Quantity: " << quantity << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Inventory product[n];

    cout << "\n----- Enter Product Details -----\n";
    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;
        product[i].input();
    }

    cout << "\n===== INVENTORY DETAILS =====\n";
    for (int i = 0; i < n; i++) {
        product[i].display();
    }

    return 0;
}
