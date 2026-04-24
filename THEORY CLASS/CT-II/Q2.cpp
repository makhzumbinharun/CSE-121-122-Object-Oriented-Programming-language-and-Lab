#include <bits/stdc++.h>
using namespace std;

class Room {
public:
    int room_no, price, size;
    
    Room(int r = 0, int p = 0, int s = 0) {
        room_no = r;
        price = p;
        size = s;
    }
    
    friend bool operator<(Room ob1, Room ob2);
    friend bool operator>(Room ob1, Room ob2);
};

bool operator<(Room ob1, Room ob2) {
    return ob1.price < ob2.price;
}

bool operator>(Room ob1, Room ob2) {
    return ob1.price > ob2.price;
}

int main() {
    Room R1(217, 500, 600), R2(417, 600, 800);
    
    if (R1 < R2)  cout << "Room " << R1.room_no << " is cheaper than Room " << R2.room_no << endl;
    else   cout << "Room " << R1.room_no << " is not cheaper than Room " << R2.room_no << endl;
    
    if (R1 > R2) cout << "Room " << R1.room_no << " is more expensive than Room " << R2.room_no << endl;
    else      cout << "Room " << R1.room_no << " is not more expensive than Room " << R2.room_no << endl;
    
    return 0;
}
