#include <bits/stdc++.h>
using namespace std;

// Create a student class to store and manage marks in English and Math
class Student {
private:
    int english;
    int math;

public:
    // Default constructor
    Student() {
        english = 0;
        math = 0;
    }

    // Parameterized constructor to initialize the marks
    Student(int eng, int mth) {
        english = eng;
        math = mth;
    }

    // Overload the assignment operator (=) to copy marks
    Student& operator=(const Student& source) {
        // Protect against self-assignment (e.g., s1 = s1)
        if (this != &source) {
            english = source.english;
            math = source.math;
        }
        return *this; // Return the current object
    }

    // Create a marks function to display the marks
    void marks() {
        cout << "English: " << english << ", Math: " << math << endl;
    }
};

int main() {
    // In the main function, create two student objects, s1 and s2, 
    // and initialize them with different marks.
    Student s1(85, 90);
    Student s2(75, 80);

    // Display the initial marks of both students
    cout << "--- Initial Marks ---" << endl;
    cout << "s1: ";
    s1.marks();
    cout << "s2: ";
    s2.marks();
    cout << endl;

    // Assign s2 to s1 using the overloaded assignment operator
    cout << "Executing: s1 = s2;" << endl;
    s1 = s2; 
    cout << endl;

    // Display the marks again to verify that the values were copied correctly
    cout << "--- Marks After Assignment ---" << endl;
    cout << "s1 is now: ";
    s1.marks(); 
    cout << "s2 remains: ";
    s2.marks();

    return 0;
}
