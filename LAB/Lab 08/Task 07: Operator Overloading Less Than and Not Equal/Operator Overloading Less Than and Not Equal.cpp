#include <bits/stdc++.h>
using namespace std;
class Student{
    int English, Bangla, Math;
public:
    Student(){
        English=0,Bangla=0,Math=0;
    }
    
    Student(int i, int j, int k){
        English=i;
        Bangla=j;
        Math=k;
    }
    
    int operator<(Student ob){
        int avg1=(English+Bangla+Math)/3;
        int avg2=(ob.English+ob.Bangla+ob.Math)/3;
    return (avg1<avg2);
}
    int operator!=(Student ob){
        int avg1=(English+Bangla+Math)/3;
        int avg2=(ob.English+ob.Bangla+ob.Math)/3;
    return (avg1!=avg2);
}

    
    void display(){
        cout << "English: " << English << " Bangla: " << Bangla << " Math: " << Math << endl;
    }
};

int main() {
	Student MBH(10, 20, 30), MRI(40, 50, 60);
	MBH.display();
	MRI.display();
	
	cout << "\nLess Than Overloading\n";
	if(MBH<MRI) cout << "MRI is the topper";
	else cout << "MBH is the topper";
	cout << "\n";
	cout << "\nNot Equal Overloading" << endl;
	if(MBH!=MRI) cout << "Not Equal";
	else cout << "Equal";
	
return 0;
}
