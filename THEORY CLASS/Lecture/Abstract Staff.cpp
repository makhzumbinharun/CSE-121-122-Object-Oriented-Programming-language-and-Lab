#include <iostream>
using namespace std;

// 🔹 Base Class (Abstract)
class Staff {
protected:
    int id;
    string name;

public:
    // Constructor
    Staff(int i, string n) {
        id = i;
        name = n;
    }

    // Pure virtual function
    virtual void Salary() = 0;

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Virtual destructor
    virtual ~Staff() {}
};

// 🔹 Professor Class
class Professor : public Staff {
private:
    double monthlySalary;
    double yearlyBonus;

public:
    Professor(int i, string n, double m, double y)
        : Staff(i, n) {
        monthlySalary = m;
        yearlyBonus = y;
    }

    void Salary() {
        double total = (monthlySalary * 12) + yearlyBonus;
        cout << "Professor Salary: " << total << endl;
    }
};

// 🔹 Adjunct Faculty Class
class AdjunctFaculty : public Staff {
private:
    double courseFee;
    int numberOfCourses;

public:
    AdjunctFaculty(int i, string n, double fee, int num)
        : Staff(i, n) {
        courseFee = fee;
        numberOfCourses = num;
    }

    void Salary() {
        double total = courseFee * numberOfCourses;
        cout << "Adjunct Faculty Salary: " << total << endl;
    }
};

// 🔹 Visiting Lecturer Class
class VisitingLecturer : public Staff {
private:
    double perLectureRate;
    int totalLectures;

public:
    VisitingLecturer(int i, string n, double rate, int total)
        : Staff(i, n) {
        perLectureRate = rate;
        totalLectures = total;
    }

    void Salary() {
        double total = perLectureRate * totalLectures;
        cout << "Visiting Lecturer Salary: " << total << endl;
    }
};

// 🔹 Main Function
int main() {
    Staff* s;

    Professor p(1, "Dr. Rahman", 50000, 100000);
    s = &p;
    s->display();
    s->Salary();

    AdjunctFaculty a(2, "Mr. Karim", 8000, 5);
    s = &a;
    s->display();
    s->Salary();

    VisitingLecturer v(3, "Ms. Ayesha", 1000, 40);
    s = &v;
    s->display();
    s->Salary();

    return 0;
}
