#include <bits/stdc++.h>
using namespace std;

class BANKAC {
private:
    long long accountNumber;
    double balance;

public:
    string accountHolderName;
    string bankName;

    void Account_info(long long acn, string name, string bankname, double bal) {
        accountNumber = acn;
        accountHolderName = name;
        bankName = bankname;
        balance = bal;
    }

    void deposit(double Amount) {
        balance += Amount;
    }

    void withdraw(double Amount) {
        if (Amount <= balance)
            balance -= Amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void getBalance() {
        cout << "Balance: " << balance << endl;
    }

    void displayAccountDetails() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

int main() {
    char input;
    double amount;

    BANKAC BBL;
    BBL.Account_info(10594056, "MBH", "Brac Bank PLC.", 60000);

    BBL.displayAccountDetails();
    BBL.getBalance();

    cout << "Select an Option\n" << "1. Deposit\n2. Withdraw" << endl;
    cin >> input;
    cout << "Enter amount: ";
    cin >> amount;

    if (input == '1') {
        BBL.deposit(amount);
        BBL.getBalance();
    }
    else if (input == '2') {
        BBL.withdraw(amount);
        BBL.getBalance();
    }
    else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}
