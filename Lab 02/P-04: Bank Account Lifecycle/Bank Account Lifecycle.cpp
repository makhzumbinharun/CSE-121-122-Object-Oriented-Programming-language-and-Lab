#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    long long account_number;
    double balance;
    public:
    BankAccount(long long ac, double bal){
        account_number=ac;
        balance=bal;
    }
    ~BankAccount(){
        cout<<"\nBank Account is closed.\n";
    }
    void displayinfo(){
        cout<<"Account Number: "<<account_number<<"\nBalance:"<<balance;
    }
};
int main() {
	BankAccount BBL(10594000574, 60000);
	BBL.displayinfo();
	
	return 0;

}

//Type cast the ac number or take it as string cause if you start the ac with 0 the cpp will convert it to octal.
