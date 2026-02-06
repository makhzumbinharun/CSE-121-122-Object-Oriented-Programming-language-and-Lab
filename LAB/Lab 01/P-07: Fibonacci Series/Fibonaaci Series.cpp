#include <bits/stdc++.h>
using namespace std;

long long FIB(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;
    return FIB(N - 1) + FIB(N - 2);
}

long long sumFIB(int N) {
    if (N == 0) return 0;
    return FIB(N - 1) + sumFIB(N - 1);
}

int main() {
    int N;
    cin >> N;

    cout << "Fibonacci series: ";
    for (int i = 0; i < N; i++) {
        cout << FIB(i) << " ";
    }
    cout << endl;

    cout << "Sum of Fibonacci series: " << sumFIB(N) << endl;

    return 0;
}
