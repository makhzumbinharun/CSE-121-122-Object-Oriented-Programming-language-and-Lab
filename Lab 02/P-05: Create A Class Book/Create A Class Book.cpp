#include <bits/stdc++.h>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int pubyr;
    public:
    void display_details(){
        cout<<"Title: "<<title<<endl<<"Author: "<<author<<endl<<"Publication Year: "<<pubyr<<endl;
    }
};

int main() {
	Book OOP;
	OOP.title="Object-Oriented Programming in C++";
	OOP.author="Robert Lafore";
	OOP.pubyr=2002;
	OOP.display_details();
	return 0;

}
