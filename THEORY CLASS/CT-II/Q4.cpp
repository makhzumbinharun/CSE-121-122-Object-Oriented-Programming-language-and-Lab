#include <bits/stdc++.h>
using namespace std;

class X {
public:
    int x;
    X(int i=0){
        x=i;
    }
    friend X operator-(int i, X ob);
    
    void display(){
    cout << "X: " << x;
}
};

X operator-(int i, X ob){
    X temp;
    temp.x=i-ob.x;
    return temp;
}

int main() {
    X ob1, ob2(10);
    ob1=45-ob2;
    ob1.display();
    
    return 0;
}
