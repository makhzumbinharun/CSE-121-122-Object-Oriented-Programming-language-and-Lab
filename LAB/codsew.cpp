#include <bits/stdc++.h>
using namespace std;
class coord{
    int x,y;
    public:
    coord(){
        x=0;y=0;
    }
    friend coord operator+(coord ob1, int i);
    friend coord operator+(int i, coord ob1);
    void display(){
        cout << "X: " << x << "Y: " << y << endl;
    }
};
coord operator+(coord ob1, int i){
    coord temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    return temp;
}

coord operator+(int i, coord ob1){
    coord temp;
    temp.x=i+ob1.x;
    temp.y=i+ob1.y;
    return temp;
}
int main() {
	coord o1(10,10), o2
	
return 0;
}
