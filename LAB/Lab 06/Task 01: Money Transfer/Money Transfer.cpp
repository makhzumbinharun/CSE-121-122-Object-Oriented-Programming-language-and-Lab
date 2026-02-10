#include <bits/stdc++.h>
using namespace std;
class BankAccount {
public:
    double accountNumber, balance;

    BankAccount(double accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }
};

void transfer(BankAccount &A, BankAccount &B, double amount) {
    if(A.balance >= amount){
        A.balance -= amount;
        B.balance += amount;
        cout << "\nTransfer Successful!" << endl;
    }
    else{
        cout << "\nNOT SUFFICIENT BALANCE!" << endl;
    }
}

int main() {
    double amount, BAL_A, BAL_B;
    
    cout << "Enter the balance of Account A and B: ";
    cin >> BAL_A >> BAL_B;
    
    BankAccount A(20254103279, BAL_A);
    BankAccount B(20254103248, BAL_B);

    cout << "\nEnter the amount to transfer: ";
    cin >> amount;

    transfer(A, B, amount);


    cout << "Final Balance A: " << A.balance << endl;
    cout << "Final Balance B: " << B.balance << endl;

    return 0;
}
