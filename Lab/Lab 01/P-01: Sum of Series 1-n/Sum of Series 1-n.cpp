#include <bits/stdc++.h>
using namespace std;

long long sum(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of Series of 1 to " << n << ": " << sum(n) << endl;
    return 0;
}
