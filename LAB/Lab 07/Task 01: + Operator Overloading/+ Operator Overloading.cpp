#include <bits/stdc++.h>
using namespace std;

class coord{
    private:
    int x, y;
    public:
    coord(){
        x=0;
        y=0;
    }
    coord(int x1, int y1){
        x=x1;
        y=y1;
    }
    
    coord operator+(coord ob){
        coord temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y;
        return temp;
    }
    
    void display(){
        cout << "(ob1+ob2) X: " << x << "\n(ob1+ob2) Y: " << y <<endl;
    }
    
    
};



int main() {
	coord s1(2,7), s2(2,6), s3;
	s3=s1+s2;
	s3.display();
	return 0;
}
