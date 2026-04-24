#include <bits/stdc++.h>
using namespace std;

class Device {
public:
   virtual void showstatus()=0; 
};

class Employee : public Device {
public:
    string ID;
    Employee(string i = "EMP-5421"){
        ID=i;
    }
    void employeeID () {
        cout << "Employee ID: " << ID << endl;
    }
};

class Laptop : virtual public Employee {
public:
    Laptop(string id = "EMP-5421") : Employee(id) {}
    int x, y;
    
    Laptop(int i, int j) {
        x=i;
        y=j;
    }
    
    void compute(int x, int y) {
        if (y != 0) {
            cout << "Laptop compute (division " << x << "/" << y << ") = " << (x / y) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

class Desktop : virtual public Employee {
public:
    Desktop(string id = "EMP-5421") : Employee(id) {}
    
    void validateEmail(string email) {
        cout << "\n--- Validating email: " << email << " ---" << endl;
        try{
            if((email[0]<'A' || email[0]>'Z') && (email[0]<'a' || email[0]>'z')){
            throw invalid_argument("Email cannot start with a special character or digit.");
        }
        int atcount = 0;
        int atIndex = -1;
        for(int i=0; i<email.length(); i++){
            if(email[i] == '@'){
                atcount++;
                atIndex=i;
            }
        }
        if(atcount!=1){
            throw invalid_argument("Must contain exactly one @ symbol.");
        }
        string localPart=email.substr(0, atIndex);
        if(localPart.length()<3){
            throw invalid_argument("Local part (before @) must be at least 3 characters.");
        }
        string domain = email.substr(atIndex+1);
        if(domain.length()<4 || domain.substr(domain.length() - 4) != ".com" && 
                domain.substr(domain.length() - 4) != ".org" && 
                domain.substr(domain.length() - 4) != ".net"){
                    throw invalid_argument("Domain must end with .com, .org, or .net");
                }
                cout << "Email is valid." << endl;
        }
        
        catch(const invalid_argument &e){
            cout << "Error: " << e.what() << endl;
        }
    }
};



class Tablet : public Laptop, public Desktop {
public:
    Tablet(string id = "EMP-5421") : Employee(id), Laptop(id), Desktop(id) {}
    void compute(int x, int y) {
        cout << "Tablet compute (multiplication " << x << "*" << y << ") = " << (x * y) << endl;
    }
    
    void showstatus() override {
        cout << "Device status: All systems operational." << endl;
    }
};



int main() {
    Tablet myTablet("EMP-5421");
    
    myTablet.employeeID();
    
    myTablet.validateEmail("user@domain.gov");   
    myTablet.validateEmail("user123@gmail.com"); 
    
    cout << endl;
    
    myTablet.Laptop::compute(20, 4);
    
    myTablet.compute(6, 7);
    
    cout << "Calling Laptop's compute from Tablet object using scope resolution: ";
    myTablet.Laptop::compute(20, 4); 
    
    myTablet.showstatus();
    
    return 0;
}
