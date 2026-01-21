#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    long long roll_number;
    int mark1;
    int mark2;
    int mark3;
    
    public:
    void set_value(string N, long long id, int m1, int m2, int m3){
        name=N;
        roll_number=id;
        mark1=m1;
        mark2=m2;
        mark3=m3;
    }
    int calculate_total_marks(){
        return mark1+mark2+mark3;
    }
    int calculate_average_mark(){
        return (mark1+mark2+mark3)/3;
    }
    
    void display_info(){
        cout<<"Student Name: "<<name<<endl<<"Roll Number: "<<roll_number<<endl;
        cout<<"Total Marks: "<<calculate_total_marks()<<endl<<"Average Mark: "<<calculate_average_mark()<<endl;
    }
};



int main() {
	int M1, M2, M3;
	string Name;
	long long ID;
	cin>>Name>>ID>>M1>>M2>>M3;
	Student Info;
	Info.set_value(Name, ID, M1, M2, M3);
	Info.display_info();
	
	
return 0;

}
