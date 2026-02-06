#include <bits/stdc++.h>
using namespace std;

class TaxCalculator{

    public:
    double calculateTax(double income){
        return income*0.15;
    }
    double calculateTax(double income, double taxRate){
        return income*taxRate;
    }
};
    
int main() {
    TaxCalculator MBH, MBH1;
    cout << "Tax1: " << MBH.calculateTax(96000.00) << endl;
    cout << "Tax2: " << MBH1.calculateTax(180000.00, 0.15) << endl;
    return 0;	
}
