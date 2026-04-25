#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Rectangle{
    T length;
    T width;
    
    public:
    Rectangle(T l, T w){
        length = l;
        width = w;
    }
    T area(){
        return length * width;
    }
};

int main() {
    Rectangle obj1(5,6);
    cout << "AREA: " << obj1.area() << endl;
    Rectangle obj2(3.65,9.22);
    cout << "AREA: " << obj2.area() << endl;
    
}
