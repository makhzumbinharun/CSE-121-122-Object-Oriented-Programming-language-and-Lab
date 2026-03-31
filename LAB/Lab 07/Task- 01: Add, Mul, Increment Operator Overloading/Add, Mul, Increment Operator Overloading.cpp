#include <bits/stdc++.h>
using namespace std;

class Number{
    public:
    int x;
    
    Number operator+(Number ob){
        Number temp;
        temp.x = x+ob.x;
        return temp;
    }
    
    Number operator*(Number ob){
        Number temp;
        temp.x = x*ob.x;
        return temp;
    }
    
    Number operator++(){
        ++x;
        return *this;
    }
    
    void display(){
        cout << x << endl;
    }
    
};



int main() {
	Number N1(2), N2(3), N3(9);
	Number SUM=N1+N2;
	cout << "Added: ";
	SUM.display();
	
	Number MUL=N1*N2;
	cout << "Multiplied: ";
	MUL.display();
	
	++N3;
	cout << "Prefix Increment: ";
	N3.display();

	
	return 0;
}
