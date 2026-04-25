#include <bits/stdc++.h>
using namespace std;
    

int main() {
    int temp;
    cout << "Enter Temparature: ";
    cin >> temp;
    try{
        if(temp < -273.15){
            throw invalid_argument("Invalid Temperature.");
        }
        cout << "Valid!" << endl;
    }
    catch(const invalid_argument &e){
        cout << e.what() << endl;
    }
    return 0;
}
