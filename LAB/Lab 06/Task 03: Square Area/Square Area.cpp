#include <bits/stdc++.h>
using namespace std;
class Square{
    public:
    int length;
    void set_length(int l){
        length=l;
    }
};
int calculate_area(Square S1){
    return S1.length*S1.length;
}

int main() {
    Square S1;
    S1.set_length(5);
    cout << "Area of the Square: " << calculate_area(S1) << endl;
	return 0;

}
