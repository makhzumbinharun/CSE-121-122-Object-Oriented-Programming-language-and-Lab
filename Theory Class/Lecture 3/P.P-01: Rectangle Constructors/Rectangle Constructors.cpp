#include <bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    int length, width;
    Rectangle(){
        length=0;
        width=0;
    }
    Rectangle(int l, int w){
        length=l;
        width=w;
    }
    int area(){
        return length*width;
    }
    void display(){
        cout<<area()<<endl;
    }
};
int main() {
    int l, w;
	cin>>l>>w;
	Rectangle Oalid(l,w);
	Oalid.display();
	
	return 0;
}
