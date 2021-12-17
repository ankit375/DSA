#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n){
	
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	
	while(s<e){
		
		if(arr[mid] >= arr[0]){
			s = mid + 1;
		}
		else{
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
	
}


int main(){
	int arr[3] = {0,1,0};
	cout<<getPivot(arr,3);
    // write your code here
    return 0;
}
