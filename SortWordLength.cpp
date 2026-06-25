#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();

    vector<string> words(n);

    cout << "Enter words:\n";
    for(int i = 0; i < n; i++) {
        getline(cin, words[i]);
    }

    sort(words.begin(), words.end(), compare);

    cout << "\nWords sorted by length:\n";
    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}