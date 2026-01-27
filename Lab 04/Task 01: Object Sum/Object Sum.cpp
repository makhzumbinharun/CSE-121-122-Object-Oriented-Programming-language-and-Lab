#include <bits/stdc++.h>
using namespace std;
class samp{
    int i;

public:
    samp(int n){
        i=n;
    }
    int get_i(){
        return i;
    }
    
};

int sqr_it(samp o1, samp o2){
    return (o1.get_i()+o2.get_i()) * (o1.get_i()+o2.get_i());
}

int main() {
    int x, y;
    cin >> x >> y;
    samp a(x), b(y);
    cout << "Square of the sum of two objects are: " << sqr_it(a, b) << endl;
    return 0;
}
