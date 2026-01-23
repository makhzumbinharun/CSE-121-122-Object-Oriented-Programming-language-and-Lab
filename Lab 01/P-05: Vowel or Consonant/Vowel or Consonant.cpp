#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a Vowel" << endl;
        }
        else {
            cout << ch << " is a consonant" << endl;
        }
        
    } else {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}
