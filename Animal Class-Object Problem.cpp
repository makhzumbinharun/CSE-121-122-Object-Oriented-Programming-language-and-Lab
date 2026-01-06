#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
    string color;
    string sound;
    string name;
    void printinfo(){
        cout<<"Color: "<<color<<endl<<"Sound: "<<sound<<endl;
    }
    void showname(){
         cout<<"Name: "<<name<<endl;
    }
};

int main() {
    	animal Human;
    	Human.color= "White";
    	Human.sound= "Meow";
    	Human.name="Zebu";
    	Human.printinfo();
    	Human.showname();
    return 0;

}
