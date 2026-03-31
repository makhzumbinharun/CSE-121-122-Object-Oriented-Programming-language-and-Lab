#include <bits/stdc++.h>
using namespace std;

class Distance{
    private:
    int meters;
    
    public:

    Distance(int x=0){
        meters=x;
    }
    
    Distance operator++(){
        ++meters;
        return *this;
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
