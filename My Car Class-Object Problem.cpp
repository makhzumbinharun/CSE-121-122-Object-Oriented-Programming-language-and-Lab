#include <bits/stdc++.h>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    void displayinfo(){
        cout<<"Brand: "<<brand<<endl<< "Model: "<<model<<endl<<"Year: "<<year<<endl; 
    }
};

int main() {
    	car myCar;
    	myCar.brand="Tesla";
    	myCar.model="Model X";
    	myCar.year=2018;
    	myCar.displayinfo();
    return 0;

}
