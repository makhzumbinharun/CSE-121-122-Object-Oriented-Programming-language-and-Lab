#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int id;
    int age;
    string name;
public:
    Student(int i, int a, string n) {
        id = i;
        age = a;
        name = n;
    }

    bool operator<(const Student &ob2){
        return age < ob2.age;
    }

    bool operator!=(const Student &ob2){
        return age != ob2.age;
    }
};

    

int main() {
    Student H1(272, 24, "EAT"), H2(279, 20, "MBH");

    if (H1 < H2)
        cout << "Second one is elder!" << endl;
    else
        cout << "First one is elder!" << endl;

    if (H1 != H2)
        cout << "They are not the same age" << endl;

    return 0;
}
