#include<bits/stdc++.h>
using namespace std;

int pow(int x,int n){
	
    if(n==1){
        return x;
    }
    else if(n==0){
        return 1;
    }
    int so = power(x,n-1);
    return x * so;
}

int main(){
	int x,y;
	cin>>x>>y;
	
	int p = pow(x,y);
	cout<<p<<endl;
    // write your code here
    return 0;
}
