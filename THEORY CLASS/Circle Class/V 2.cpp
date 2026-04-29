#include <bits/stdc++.h>
using namespace std;
class Circle{
    public:
    float Radius;
    float Area;
    float Circumference;
    float printarea(){
        float area;
        area=3.1416*Radius*Radius;
        cout<<"Area of the Circle: "<<area<<endl;
        return area;
    }
    float printcir(){
        float cir;
        cir=2*3.1416*Radius;
        cout<<"Circumference of the Circle: "<<cir<<endl;
    return cir;
    }
};

int main() {
        float R;
        
    	Circle Area;
    	cin>>R;
    	Area.Radius=R;
    	Area.printarea();
    	Area.printcir();
return 0;

}
