#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    int speed;
    
    public:
    Vehicle(int s){
        speed=s;
    }
    int getSpeed();
    };
    
	int Vehicle::getSpeed(){
        return speed;
    }
	
int main() {
    Vehicle V1(500);
    Vehicle *pt;
    pt=&V1;
    cout << "Vehicle Speed: " << pt->getSpeed();
    
	return 0;
}
