#include <bits/stdc++.h>
using namespace std;

class Animal {
private:
    string sound;

public:
    Animal(string s) {
        sound = s;
    }

    string get() {
        return sound;
    }
};

int main() {

    Animal Lion("Roar");

    Animal *pt;
    pt = &Lion;

    cout << "Animal Sound: " << pt->get() << endl;

    return 0;
}
