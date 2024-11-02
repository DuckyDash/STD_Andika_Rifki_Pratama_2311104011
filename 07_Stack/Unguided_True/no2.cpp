#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

string reverseWords_2311104011(const string& sentence) {
    stringstream ss(sentence);
    string word, result;

    while (ss >> word) {
        stack<char> s;

        for (char ch : word) {
            s.push(ch);
        }

        string reversedWord;
        while (!s.empty()) {
            reversedWord += s.top();
            s.pop();
        }

        result += reversedWord + " ";
    }

    return result;
}

int main() {
    string sentence;

    cout << "Masukkan Kalimat: ";
    getline(cin, sentence);

    string reversedSentence = reverseWords_2311104011(sentence);
    cout << "Data stack Array: " << endl;
    cout << "Data : " << reversedSentence << endl;

    return 0;
}
