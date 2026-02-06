#include <bits/stdc++.h>
using namespace std;

class Point2D{
    int x, y;
    public:
    Point2D(int x1, int y1){
        x=x1;
        y=y1;
    }
    friend double calaculateDistance(Point2D P1, Point2D P2);
};
    double calaculateDistance(Point2D P1, Point2D P2){
        return sqrt(pow((P1.x-P2.x),2)+pow((P1.y-P2.y),2));
    }
int main() {
    Point2D P1(2,3), P2(4,5);
    cout << calaculateDistance(P1, P2) << endl;
    return 0;	
}
