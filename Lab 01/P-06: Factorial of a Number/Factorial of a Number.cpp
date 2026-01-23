#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);

}

int main() {
    int n;
    cin >> n;

    if (n < 0) cout << "Factorial is not defined for negative numbers." << endl;
    else cout << factorial(n) << endl;

    return 0;
}
