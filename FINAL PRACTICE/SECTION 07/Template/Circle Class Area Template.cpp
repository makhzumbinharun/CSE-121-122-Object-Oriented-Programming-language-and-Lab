#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Circle{
    private:
    T radius;
    
    public:
    Circle(T r){
        radius = r;
    }
    double area(){
        return 3.1416 * radius * radius;
    }
};

int main() {
    Circle <int>C1(5);
    Circle <double>C2(5.6);
    cout << "AREA(C1): " << C1.area() << endl;
    cout << "AREA(C2): " << C2.area() << endl;
    return 0;
}
