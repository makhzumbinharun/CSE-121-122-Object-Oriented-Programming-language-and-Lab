#include <bits/stdc++.h>
using namespace std;
    class Box{
    double length, width, height;

public:
    Box(double l, double w, double h){
        length = l;
        width = w;
        height = h;
    }
    
    double volume(){
        return length * width * height;
    }
    
    void display(){
        cout << "Length: " << length << "\nWidth:" << width << "\nHeight: " << height << endl;
    }
    
};

void VolumeByValue(Box b){
    cout << "Volume of the Box: " << b.volume() << endl;
}

int main() {
    Box B1(7, 4, 3);
    B1.display();
    VolumeByValue(B1);
    return 0;
}
