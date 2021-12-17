#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	if (n==0){
		return 1;
	}
	
	int smalloutput = factorial(n-1);
	return n*smalloutput;
	
}


int main(){
	
	int n;
	cin>>n;
	
	int output = factorial(n);
	cout<<output<<endl;
    // write your code here
    return 0;
}
