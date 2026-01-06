#include <bits/stdc++.h>
using namespace std;

long long FIB(int N){
	 if(N==0) return 0;
	 else if(N==1) return 1;
	 else return (FIB(N-1)+FIB(N-2));

}


int main() {
	int N;
	cin>>N;
    long long Fib=FIB(N); 
	for(int i=0; i<N; i++){
	    cout<<FIB(i)<<" ";
	}
    	return 0;

}
