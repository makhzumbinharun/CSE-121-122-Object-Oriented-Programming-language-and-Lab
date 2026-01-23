#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y;
    cin >> Y;

    if (Y % 400 == 0)
        cout << Y << " is a leap year!\n";
    else if (Y % 100 == 0)
        cout << Y << " is not a leap year!\n";
    else if (Y % 4 == 0)
        cout << Y << " is a leap year!\n";
    else
        cout << Y << " is not a leap year!\n";

    return 0;
}
