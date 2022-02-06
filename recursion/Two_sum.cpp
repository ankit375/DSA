#include<bits/stdc++.h>
using namespace std;

bool two_sum(int arr[],int n,int sum){
	
	int i = 0;
	
	while(i<n){
		for(int j=1;j<n;j++){
			if(arr[i] + arr[j] == sum){
				return true;
			}
		}
		i++;
	}
	return false;
	
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	
	cout<<two_sum(arr,n,sum)<<endl;
    // write your code here
    return 0;
}
