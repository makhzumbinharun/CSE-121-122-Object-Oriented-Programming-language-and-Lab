#include <bits/stdc++.h>
using namespace std;

class Staff{
protected:
    int id;
    string name;
public:
    void set_s(int i = 0, string n = "UNKOWN") {
        id = i;
        name = n;
    }

    virtual void salary() = 0;
    
    virtual ~Staff(){}
};

class Professor: public Staff{
private:
    int monthlySalary, yearlyBonus;
public:
    void set_p(int m = 0, int y = 0) {
        monthlySalary = m;
        yearlyBonus = y;
    }

    void salary(){
        cout << "Annual Salary of A Professor: ৳" << ((monthlySalary*12)+yearlyBonus) << endl;
    }
    
};

class AdjunctFaculty:public Staff{
private:
    int courseFee, numberOfCourses;
public:
    void set_af(int c = 0, int n = 0) {
        courseFee = c;
        numberOfCourses = n;
    }

    void salary(){
        cout << "Annual Salary of An Adjunct Faculty: ৳" << (courseFee*numberOfCourses) << endl;
    }
};


class VisitingLecturer:public Staff{
private:
    int perLectureRate, totalLectures;
public:
    void set_vl(int r = 0, int n = 0) {
        perLectureRate = r;
        totalLectures = n;
    }

    void salary(){
        cout << "Annual Salary of A Visiting Lecturer: ৳" << (perLectureRate*totalLectures) << endl;
    }
};


int main() {
    cout << "=== University Staff Salary System ===" << endl << endl;
    Staff *S;
    Professor P;
    S = &P;
    P.set_p(30000, 5000);
    S->salary();
    
    AdjunctFaculty A;
    S = &A;
    A.set_af(5000, 2);
    S->salary();
    
    VisitingLecturer L;
    S = &L;
    L.set_vl(1000, 7);
    S->salary();

    return 0;
}
