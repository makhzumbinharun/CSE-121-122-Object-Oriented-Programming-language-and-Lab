#include <bits/stdc++.h>
using namespace std;

int compute(int a, int b){
    if(a>b) return a;
    else return b;
}

int compute(int a, int b, int c){
    if(a<b && a<c) return a;
    else if(b<a && b<c) return b;
    else if(c<b && c<a) return c;
}

int compute(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum/size;
}

    
int main() {
    int a, b, c, s;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "\nEnter the size of Array: ";
    cin >> s;
    int arr[s];
    cout << "Enter the elemets: ";
    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    
    cout << "Maximum of first two numbers: " << compute(a,b) << endl;
    cout << "Minimum of three numbers: " << compute(a,b,c) << endl;
    cout << "Average if array elements: " << compute(arr,s) << endl;
    return 0;	
}
