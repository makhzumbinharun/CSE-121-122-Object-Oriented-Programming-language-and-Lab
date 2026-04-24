#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    void set_person(string n, int a) {
        name = n;
        age = a;
    }
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    long long studentID; 
    
    void set_student(long long s) {
        studentID = s;
    }
    
    void display() {
        Person::display(); 
        cout << "Student ID: " << studentID << endl;
    }
};

class TA : public Student {
public:
    string semester;
    
    void set_ta(string s) {
        semester = s;
    }
    
    void display() {
        Student::display(); 
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    TA MBH;
    
    MBH.set_person("Makhzum-Bin-Harun", 20);
    MBH.set_student(20254103279);
    MBH.set_ta("Spring 26");
    
    cout << "--- TA Complete Information ---" << endl;
    MBH.display();
    
    return 0;
}
