#include <bits/stdc++.h>
using namespace std;

template <typename T>
T Min(T y,T A[]) {
    int min = A[0];
    for(int i = 0; i < y; i++){
        min = Min(A[i], A[i+1]);
    }
    return min;
}


int main() {
    string a="Hello World", b="Good Morning", c="Good Noon";
    int A[5]={1,2,3,4,5};
    int B[5]=A[5]={1,2,3,4,5};
    int C[5]={1,2,3,4,5};
    void Min(A, 5);
    return 0;
}


