#include <bits/stdc++.h>
using namespace std;
    

int main() {
    int age;
    cout << "Enter Age: ";
    cin >> age;
    try{
        if(age < 0 ||age > 120){
            throw invalid_argument("Invalid age entered.");
        }
        cout << "Valid!" << endl;
    }
    catch(const invalid_argument &e){
        cout << e.what() << endl;
    }
    return 0;
}
