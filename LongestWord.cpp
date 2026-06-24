#include <iostream>
#include <string>
using namespace std;

// LONGEST WORD

int main() {
    string str, word="" , longest="";
    cout << "Enter the sentence : ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
              word+=str[i];
        }
        else{
            if(word.length()>longest.length()){
                longest = word;
            }
            word = "";
        }
    }
     // To manage last word
    if (word.length() > longest.length()) {
        longest = word;
    }

    cout << "Longest word: " << longest;

    return 0;
}