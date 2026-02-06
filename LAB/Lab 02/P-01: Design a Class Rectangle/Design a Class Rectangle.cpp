#include <bits/stdc++.h>
using namespace std;

/*const double PI=3.1416;*/

class Rectangle{
    private:
    int length;
    int width;
    public:
    void set_value(int l, int w){
        length=l;
        width=w;
    }
    int calculate_area(){
        return length*width;
    }
    int calculate_perimeter(){
        return 2*(length+width);
    }
    
    void display_area(){
        cout<<"Area: "<<calculate_area()<<endl<<"Perimeter: "<<calculate_perimeter()<<endl;
    }
};



int main() {
	int L, W;
	cin>>L>>W;
	Rectangle OOP;
	OOP.set_value(L, W);
	OOP.display_area();
	
	
return 0;

}
