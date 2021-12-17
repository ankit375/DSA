#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	
	if(n==0){
		return 0;
	}
	
	if(n==1){
		return 1;
	}
	
	int smallans1 = fib(n-1);
	int smallans2 = fib(n-2);
	
	return smallans1 + smallans2;
}

int main(){
	int n;
	cin>>n;
	
	int ans = fib(n);
	cout<<ans<<endl;
    // write your code here
    return 0;
}
