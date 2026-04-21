#include <bits/stdc++.h>
using namespace std;

template <typename T>
void Min(T x, T y) {
    if (x < y)
        cout << x << endl;
    else
        cout << y << endl;
}

int main() {
    int X, Y;
    
    cin >> X >> Y;    
    Min(X, Y);      
    Min('a', 'd'); 
    
    return 0;
}
