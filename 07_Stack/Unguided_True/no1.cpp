#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome_2311104011(const string& sentence) {
    stack<char> s;
    string cleanedSentence;

    for (char ch : sentence) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            cleanedSentence += ch;
            s.push(ch);
        }
    }

    string reversedSentence;
    while (!s.empty()) {
        reversedSentence += s.top();
        s.pop();
    }

       return cleanedSentence == reversedSentence;
}

int main() {
    string sentence;

    cout << "Masukan Kalimat: ";
    getline(cin, sentence);

    if (isPalindrome_2311104011(sentence)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
