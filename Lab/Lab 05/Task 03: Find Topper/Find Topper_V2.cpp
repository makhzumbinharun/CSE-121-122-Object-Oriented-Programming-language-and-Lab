#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }
    friend void findTopper(Student S1, Student S2);
};

void findTopper(Student S1, Student S2) {
    if (S1.marks == S2.marks) {
        cout << "\nResult: Both " << S1.name << " and " << S2.name << " have equal marks!" << endl;
    } 
    else if (S1.marks > S2.marks) {
        cout << "\nResult: " << S1.name << " is the topper with " << S1.marks << " marks." << endl;
    } 
    else {
        cout << "\nResult: " << S2.name << " is the topper with " << S2.marks << " marks." << endl;
    }
}

int main() {
    string n1, n2;
    int m1, m2;

    cout << "Enter Name for Student 1: ";
    cin >> n1;
    cout << "Enter Marks for Student 1: ";
    cin >> m1;

    cout << "Enter Name for Student 2: ";
    cin >> n2;
    cout << "Enter Marks for Student 2: ";
    cin >> m2;

    Student S1(n1, m1);
    Student S2(n2, m2);

    findTopper(S1, S2);

    return 0;
}
