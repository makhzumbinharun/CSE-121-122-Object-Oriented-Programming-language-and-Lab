#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    Point(const Point &P1) {
        x = P1.x;
        y = P1.y;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

int main() {
    Point P1(7, 9);
    Point P2 = P1;

    cout << "Point 1:\n X:" << P1.getX() << " Y:" << P1.getY() << endl;
    cout << "Point 2:\n X:" << P2.getX() << " Y:" << P2.getY() << endl;

    return 0;
}
