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
    	animal Cat;
    	Cat.color= "White";
    	Cat.sound= "Meow";
    	Cat.name="Zebu";
    	Cat.printinfo();
    	Cat.showname();
    	
    	cout<<endl;
    	
    	animal Bear;
    	Bear.color= "White";
    	Bear.sound= "Garrr";
    	Bear.name="Zabu";
    	Bear.printinfo();
    	Bear.showname();
    return 0;

}
