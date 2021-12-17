#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int n,int key){
	
	
	int s = 0,e = n-1;
	int mid = s + (e-s)/2;
	
	int ans = -1;
	
	while (s<=e){
		
		if(arr[mid] == key){
			ans = mid;
			e = mid -1;
		}
		else if(key >arr[mid]){
			s = mid+1;
		}
		else if(key<arr[mid]){
			e = mid -1;
		}
		
		mid = s +(e-s)/2;
		
	}
	
	return ans;
	
}

int last(int arr[],int n,int key){
	
	
	int s = 0,e = n-1;
	int mid = s+(e-s)/2;
	
	int ans = -1;
	
	while(s<=e){
		
		if(key == arr[mid]){
			ans = mid;
			s = mid+1;
		}
		else if(key > arr[mid]){
			s = mid +1;
		}
		else if(key < arr[mid]){
			e = mid -1;
		}
		mid = s + (e-s)/2;
		
	}
	return ans;
}


int main(){

	int arr[5] = {0,1,2,3,3};
	
	cout<<first(arr,5,3)<<endl;
	cout<<last(arr,5,3)<<endl;
    // write your code here
    return 0;
}
