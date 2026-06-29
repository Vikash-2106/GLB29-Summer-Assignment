#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int choice;

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====" << endl;
        cout << "1. Enter Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Find Maximum" << endl;
        cout << "4. Find Minimum" << endl;
        cout << "5. Find Sum" << endl;
        cout << "6. Search Element" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter size of array: ";
            cin >> n;

            cout << "Enter " << n << " elements:" << endl;
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            break;

        case 2:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3: {
            int max = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }
            cout << "Maximum Element = " << max << endl;
            break;
        }

        case 4: {
            int min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }
            cout << "Minimum Element = " << min << endl;
            break;
        }

        case 5: {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout << "Sum = " << sum << endl;
            break;
        }

        case 6: {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Element not found." << endl;

            break;
        }

        case 7:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}