#include <bits/stdc++.h>
using namespace std;

template <typename T>
void Min(T y,T A[]) {
   /* int min = A[0];
    for(int i = 0; i < y; i++){
        min = Min(A[i], A[i+1]);
    }
    return min;*/
    sort(A, A+y);
    cout << "Min: " << A[0] <<endl;
}


int main() {
    int N=5;
    string a ="Hello World", b="Good Morning", c="Good Noon";
    int A[N]={1,2,3,4,5};
    int B[N]={5,6,7,8,9};
    int C[N]={10, };
    Min(N, A);
    Min(N, B);
/*    int z=strlen(a);
    Min(a,z);*/
    return 0;
}
