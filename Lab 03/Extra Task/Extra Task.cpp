#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary;
    float bonus;

public:
    Employee() {
        name = "Unknown";
        basicSalary = 0.00;
        bonus = 0.00;
    }

    Employee(string nm, float bsalary, float bon) {
        name = nm;
        basicSalary = bsalary;
        bonus = bon;
    }

    void setSalary(float up_sal, float up_bon) {
        basicSalary = up_sal;
        bonus = up_sal;
        cout << "The Salary has been updated!!";
    }

    float calaulateTotalSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "\nEmployee Name: " << name
             << "\nBasic Salary: " << fixed << setprecision(2) << basicSalary
             << "\nBonus: " << fixed << setprecision(2) << bonus
             << "\nTotal Salary: " << fixed << setprecision(2)
             << calaulateTotalSalary() << "\n";
    }
};

int main() {
    Employee None;
    None.display();

    Employee MRI("Md. Rafiul Islam", 10000.00, 2000.00);
    MRI.display();

    MRI.setSalary(40000, 5000.00);
    cout << "\nUpdated Salary\n";
    MRI.display();

    return 0;
}
