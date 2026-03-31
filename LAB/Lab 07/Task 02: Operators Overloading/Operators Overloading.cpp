#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real, im;
    
    public:

    Complex(int r=0, int i=0){
        real=r;
        im=i;
    }
    
    Complex operator+(Complex ob){
        Complex temp;
        temp.real=real+ob.real;
        temp.im=im+ob.im;
        return temp;
    }
    
    Complex operator-(Complex ob){
        Complex temp;
        temp.real=real-ob.real;
        temp.im=im-ob.im;
        return temp;
    }
    
    Complex operator*(Complex ob){
        Complex temp;
        temp.real=(real*ob.real-im*ob.im);
        temp.im=(real*ob.im+im*ob.real);
        return temp;
    }
    
    void display(){
        cout << real << "+" << im << "i" <<endl;
    }
    
    
};



int main() {
	Complex s1(2,7), s2(2,6), s3;
	cout << "+\n";
	s3=s1+s2;
	s3.display();
	cout << "-\n";
	s3=s1-s2;
	s3.display();
	cout << "*\n";
	s3=s1*s2;
	s3.display();
	return 0;
}
