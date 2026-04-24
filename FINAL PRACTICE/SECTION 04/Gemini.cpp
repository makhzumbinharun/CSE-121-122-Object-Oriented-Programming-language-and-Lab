#include <iostream>
#include <string>
#include <stdexcept>
// Note: <bits/stdc++.h> works, but including specific libraries like <iostream> and <string> is best practice.
using namespace std;

// 1. Abstract Base Class
class Device {
public:
    // Pure virtual function makes this an abstract class
    virtual void showstatus() = 0; 
};

// 2. Base Class inheriting from Device
class Employee : public Device {
public:
    string ID;
    
    // Constructor with a default parameter
    Employee(string i = "EMP-5421") {
        ID = i;
    }
    
    void employeeID() {
        cout << "Employee ID: " << ID << endl;
    }
};

// 3. Derived Class 1
// 'virtual public Employee' prevents the Diamond Problem when Tablet inherits later
class Laptop : virtual public Employee {
public:
    int x, y;
    
    // Constructor calling the base class constructor
    Laptop(string id = "EMP-5421") : Employee(id) {}
    
    Laptop(int i, int j) {
        x = i;
        y = j;
    }
    
    // Laptop's specific compute method (Division)
    void compute(int x, int y) {
        if (y != 0) {
            cout << "Laptop compute (division " << x << "/" << y << ") = " << (x / y) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

// 3. Derived Class 2
// 'virtual public Employee' prevents the Diamond Problem here as well
class Desktop : virtual public Employee {
public:
    Desktop(string id = "EMP-5421") : Employee(id) {}
    
    // Method utilizing exception handling for custom validation
    void validateEmail(string email) {
        cout << "\n--- Validating email: " << email << " ---" << endl;
        try {
            // Rule 1 & 2: First character cannot be a special character or digit
            if ((email[0] < 'A' || email[0] > 'Z') && (email[0] < 'a' || email[0] > 'z')) {
                throw invalid_argument("Email cannot start with a special character or digit.");
            }
            
            // Rule 3: Must contain exactly one '@' symbol
            int atcount = 0;
            int atIndex = -1;
            for (int i = 0; i < email.length(); i++) {
                if (email[i] == '@') {
                    atcount++;
                    atIndex = i;
                }
            }
            if (atcount != 1) {
                throw invalid_argument("Must contain exactly one @ symbol.");
            }
            
            // Rule 4: Local part must be at least 3 characters
            string localPart = email.substr(0, atIndex);
            if (localPart.length() < 3) {
                throw invalid_argument("Local part (before @) must be at least 3 characters.");
            }
            
            // Rule 5: Domain checking
            string domain = email.substr(atIndex + 1);
            // Added parentheses around the AND (&&) conditions to enforce proper order of operations
            if (domain.length() < 4 || 
               (domain.substr(domain.length() - 4) != ".com" && 
                domain.substr(domain.length() - 4) != ".org" && 
                domain.substr(domain.length() - 4) != ".net")) {
                throw invalid_argument("Domain must end with .com, .org, or .net");
            }
            
            cout << "Email is valid." << endl;
        }
        catch (const invalid_argument &e) {
            // Catching and displaying the thrown error message
            cout << "Error: " << e.what() << endl;
        }
    }
};

// 4. Multiple Inheritance Class
class Tablet : public Laptop, public Desktop {
public:
    // Initialize the virtual base class (Employee) alongside direct parents
    Tablet(string id = "EMP-5421") : Employee(id), Laptop(id), Desktop(id) {}
    
    // Tablet's specific compute method (Multiplication) - This hides Laptop's compute
    void compute(int x, int y) {
        cout << "Tablet compute (multiplication " << x << "*" << y << ") = " << (x * y) << endl;
    }
    
    // Overriding the pure virtual function to make Tablet a concrete class
    void showstatus() override {
        cout << "Device status: All systems operational." << endl;
    }
};

int main() {
    // Create an object of the derived class
    Tablet myTablet("EMP-5421");
    
    // 1. Call base class method
    myTablet.employeeID();
    
    // 2. Demonstrate Exception Handling
    myTablet.validateEmail("user@domain.gov");     // Will throw and catch an exception
    myTablet.validateEmail("user123@gmail.com");   // Will pass validation
    
    cout << endl;
    
    // 3. Demonstrate calling hidden base class methods using the Scope Resolution Operator (::)
    myTablet.Laptop::compute(20, 4);
    
    // 4. Demonstrate calling the object's overridden method
    myTablet.compute(6, 7);
    
    cout << "Calling Laptop's compute from Tablet object using scope resolution: ";
    myTablet.Laptop::compute(20, 4); 
    
    // 5. Demonstrate Polymorphism / abstract class implementation
    myTablet.showstatus();
    
    return 0;
}
