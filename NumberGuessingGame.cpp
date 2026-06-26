#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));   //It will give rndom num

    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try Again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}