#include <bits/stdc++.h>
using namespace std;

class Person {
    string name;
    int age;

public:
    void setPI(string n, int a) {
        name = n;
        age = a;
    }

    void disPerI() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    string studentID;

    void setStudentID(string id) {
        studentID = id;
    }

    void disPerI() {
        Person::disPerI();
        cout << "Student ID: " << studentID << endl;
    }
};

class Graduate : public Student {
public:
    string thesis;

    void setThesis(string the) {
        thesis = the;
    }

    void disPerI() {
        Student::disPerI();
        cout << "Thesis: " << thesis << endl;
    }
};

int main() {
    Graduate grad;

    grad.setPI("MBH", 20);
    grad.setStudentID("279");
    grad.setThesis("LLM");

    grad.disPerI();

    return 0;
}
