#include <bits/stdc++.h>
using namespace std;
class Point3D{
    int x,y,z;
    public:
    Point3D(){
        x=0;y=0,z=0;
    }
    
    Point3D(int i, int j, int k){
        x=i;
        y=j;
        z=k;
    }
    
    friend Point3D operator+(Point3D ob1, int i);
    friend Point3D operator+(int i, Point3D ob1);
    friend Point3D operator-(Point3D ob1, Point3D ob2);
    
    void display(){
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }
};

Point3D operator+(Point3D ob1, int i){
    Point3D temp;
    temp.x=ob1.x+i;
    temp.y=ob1.y+i;
    temp.z=ob1.z+i;
    return temp;
}

Point3D operator+(int i, Point3D ob1){
    Point3D temp;
    temp.x=i+ob1.x;
    temp.y=i+ob1.y;
    temp.z=i+ob1.z;
    return temp;
}

Point3D operator-(Point3D ob1, Point3D ob2){
    Point3D temp;
    temp.x=ob1.x-ob2.x;
    temp.y=ob1.y-ob2.y;
    temp.z=ob1.z-ob2.z;
    return temp;
}

int main() {
	Point3D o1(10,10,10), o2(20,20,20), o3;
	cout << "Point3D+int" << endl;
	o3=o1+10;
	o3.display();
	cout << "int+Point3D" << endl;
	o3=10+o1;
	o3.display();
	cout << "Point3D-Point3D" << endl;
	o3=o1-o2;
	o3.display();
	
return 0;
}
