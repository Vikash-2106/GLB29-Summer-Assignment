

#include <iostream>
#include <string>
using namespace std;

// COUNT WORDS IN SENTENCE

int main() {
    string sentence;
    cout << "Enter sentence : ";
    getline(cin, sentence);

    int count = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' '))
            count++;
    }

    cout << "Number of words = " << count;

    return 0;
}