#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Quiz Application =====" << endl;

    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. New Delhi" << endl;
    cout << "3. Kolkata" << endl;
    cout << "4. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "1. HTML" << endl;
    cout << "2. Python" << endl;
    cout << "3. C++" << endl;
    cout << "4. CSS" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?" << endl;
    cout << "1. 5" << endl;
    cout << "2. 6" << endl;
    cout << "3. 7" << endl;
    cout << "4. 8" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n===== Result =====" << endl;
    cout << "Your Score: " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}