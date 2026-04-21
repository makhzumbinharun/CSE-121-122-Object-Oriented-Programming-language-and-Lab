#include <bits/stdc++.h>
using namespace std;

template <typename T>
T Min(int n, T A[]) {
    sort(A, A + n);   
    return A[0];      
}

int main() {
    int N = 5;

    int A[N] = {5, 2, 4, 1, 3};
    int B[N] = {10, 7, 8, 6, 9};

    cout << "Min A: " << Min(N, A) << endl;
    cout << "Min B: " << Min(N, B) << endl;

    
    string S[3] = {"Hello", "World", "BUBT"};
    cout << "Min string: " << Min(3, S) << endl;

    return 0;
}
