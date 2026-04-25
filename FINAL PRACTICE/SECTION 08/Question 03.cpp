#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
    string teacherName, subject;
public:
    void set_t(string n = "UNKOWN", string s = "UNKOWN") {
        teacherName = n;
        subject = s;
    }

    void display(){
        cout << "Teacher Name: " << teacherName << endl << "Subject: " << subject <<endl;
    }
};

class Researcher{
private:
    string researchArea;
    int numPublications;
public:
    void set_r(string r = "UNKNOWN", int n = 0) {
        researchArea = r;
        numPublications = n;
    }

    void display(){
        cout << "Research Area: " << researchArea << endl << "Number of Publications: " << numPublications <<endl;
    }
};


class Professor: public Teacher, public Researcher{
private:
    string department;
public:
    void set_d(string d = "UNKNOWN") {
        department = d;
    }
    
    void display(){
        Teacher::display();
        Researcher::display();
        cout << "Department: " << department << endl;
    }
};


int main() {
    Professor P1;
    P1.set_t("SBSH", "CSE");
    P1.set_r("ML, AI, DL, IP", 5);
    P1.set_d("CSE");
    cout << "--- Professor Complete Information ---" << endl;
    P1.display();



    return 0;
}
