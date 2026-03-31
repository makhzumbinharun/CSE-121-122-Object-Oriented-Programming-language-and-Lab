#include <bits/stdc++.h>
using namespace std;

class coord{
    int x,y;
    
    public:

    coord(){
        x=0;
        y=0;
    }
    coord(int i, int j){
        x=i;
        y=j;
    }
    
    int operator==(coord ob){
        return *x==ob.x && y==ob.y;
    }
    Distance operator++(int){
        Distance temp=*this;
        meters++;
        return temp;
    }
    
    void display(){
        cout << meters<<endl;
    }
};



int main() {
	Distance d1(2);
	cout << "Inital: ";
	d1.display();
	++d1;
	cout << "Prefix Increment: ";
	d1.display();
	cout << "Prefix Decrement: ";
	d1++;
	d1.display();
	return 0;
}
