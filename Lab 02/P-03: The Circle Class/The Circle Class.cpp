#include <bits/stdc++.h>
using namespace std;

const double PI=3.1416;

class Circle{
    private:
    double radius;
    public:
    void set_value(double r){
        radius=r;
    }
    double calculate_area(){
        return PI*radius*radius;
    }
    
    void display_area(){
        cout<<"Area: "<<calculate_area()<<endl;
    }
};



int main() {
	double R;
	cin>>R;
	Circle OOP;
	OOP.set_value(R);
	OOP.display_area();
	
	
return 0;

}
