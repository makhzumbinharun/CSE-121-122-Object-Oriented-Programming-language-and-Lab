#include <bits/stdc++.h>
using namespace std;

class Student{
    int marks;
    public:
    Student(int m=0){marks=m;}
    friend void findTopper(Student S1, Student S2);
};
    void findTopper(Student S1, Student S2){
        if(S1.marks==S2.marks) cout << "NO TOPPER!!" << endl;
        else if(S1.marks>S2.marks) cout << "Student 1 is the topper." << "\nMarks: " << S1.marks << endl;
        else if(S1.marks<S2.marks) cout << "Student 2 is the topper." << "\nMarks: " << S2.marks << endl;
    }
int main() {
    int M1, M2;
    cout << "Enter the marks of two students.";
    cin >> M1 >> M2;
    Student S1(M1), S2(M2);
    findTopper(S1, S2);
    return 0;	
}
