#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void output() {
        cout << "Function output() in Class A invoked successfully!" << endl;
    }
};


class B : virtual public A {};
class C : virtual public A {};
class D : virtual public A {};

class E : public B, public D {};

int main() {
    E obj;
    obj.output(); 
    
    return 0;
}
