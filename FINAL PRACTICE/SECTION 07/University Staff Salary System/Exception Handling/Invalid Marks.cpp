#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    try{
        if(marks < 0 || marks > 100){
            throw invalid_argument("The marks should be between 1 and 100!");
        }
        cout << "Valid!" << endl;
    }
    catch(const invalid_argument &e){
        cout << e.what() << endl;
    }
    return 0;
}
