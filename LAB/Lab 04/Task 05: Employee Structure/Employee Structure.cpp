#include <bits/stdc++.h>
using namespace std;

struct Employee{
    int id;
    string name;
    int basic_salary;
    int DA;
    int HRA;
    
    int cal_gross_salary(){
        return basic_salary + DA + HRA;
    }
    
};
	
int main() {
    int id, basic_salary, DA, HRA;
    string name;
    cin >> id >> name >> basic_salary >> DA >> HRA;
    struct Employee MBH(id, name, basic_salary, DA, HRA);
    cout << "ID: " << id << "\nEmployee Name: " << name << "\nBasic Salary: " << basic_salary << "\nDA: " << DA << "\nHRA: " << HRA <<endl; 
    cout << "Gross Salary: " << MBH.cal_gross_salary() << endl;
    
	return 0;
}
