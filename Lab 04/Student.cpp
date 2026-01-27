#include <bits/stdc++.h>
using namespace std;

/*struct Student{
    string name;
    int roll;
    int marks [3];
    
    int display_avg_marks(){
        return ;
    }
    
};*/
	
/*int main() {
    int S;
    cin >> S;
    int marks [3];
    while (S--){
    
    for(int i=0; i<3; i++){
        cin >> mark[i];
    }
    
    }
    struct Student S1("Makhzum", 279, 80, 90, 95);
    S1
    
	return 0;
}*/




int main(){
    string name;
    int roll;
    int marks[3];
    cin >> name >> roll;
    
    for(int i=0; i<3; i++){
        cin >> marks[i];
    }
    int sum, avg;
    for(int i=0 ; i<3; i++){
        sum=marks[i]+marks[i+1];
    }
    avg=sum/3;
    cout << "Name: " << name << "\nRoll: " << roll << "\nAverage Mark: " << avg;
    return 0;
}
