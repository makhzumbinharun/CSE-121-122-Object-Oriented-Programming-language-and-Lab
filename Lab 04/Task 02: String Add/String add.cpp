#include <bits/stdc++.h>
using namespace std;
class sample{
    string s;

public:
    sample(string i){
        s=i;
    }
    string get_s(){
        return s;
    }
    
};

string add_string(sample o1, sample o2){
    return (o1.get_s()+o2.get_s());
}

int main() {
    /*string s1, s2;
    cin >> s1 >> s2;
    sample o1(s1), o2(s2);*/
    sample S1("Hello");
    sample S2("World!");
    cout << "Added String Value: " << add_string(S1, S2) << endl;
    return 0;
}
