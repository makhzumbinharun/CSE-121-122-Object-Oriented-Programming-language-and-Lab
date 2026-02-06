#include <bits/stdc++.h>
using namespace std;
class Product{
    private:
    string productName;
    string productID;
    double price;
    public:
    Product(){
    productName="Unnamed";
    productID="0";
    price=0.0;
    }
    Product(string proname, string proid, double pr){
    productName=proname;
    productID=proid;
    price=pr;
    }
    void displayDetails(){
        cout<<"Product Name: "<<productName<<"\nProduct ID: "<<productID<<"\nPrice: " << fixed << setprecision(2) << price << "\n";
    }
    
    ~Product(){
        cout<<"\nThe Product is out of stock.\n";
    }
};    
int main() {
    Product None;
    None.displayDetails();
    Product P1("Alooz Chips", "0157", 25.00);
    P1.displayDetails();
    
    

    return 0;

}
