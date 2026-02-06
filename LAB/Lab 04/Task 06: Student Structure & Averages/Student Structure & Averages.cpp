#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks[3];
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    while (n--) {
        Student S;
        int sum = 0;

        cout << "\nEnter Name and Roll: ";
        cin >> S.name >> S.roll;

        cout << "Enter 3 subject marks: ";
        for (int i = 0; i < 3; i++) {
            cin >> S.marks[i];
            
            sum += S.marks[i]; 
        }

        double avg = (double)sum / 3.0;

        cout << "Name: " << S.name << endl;
        cout << "Roll: " << S.roll << endl;
        cout << "Average Mark: " << avg << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
