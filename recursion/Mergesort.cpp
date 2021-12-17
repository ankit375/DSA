#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int si,int ei){
	
	int mid = si + (ei - si)/2;
	
	int n1 = mid - si + 1;
	int n2 = ei - mid;
	
	int left[n1],right[n2];
	
	for(int i=0;i<n1;i++){
		left[i] = arr[si+i];
	}
		
	for(int i=0;i<n2;i++){
		right[i] = arr[mid+i+1];
	}	
	
	int i = 0;
	int j = 0;
	int k = si;
	while(i<n1 && j<n2){
		if(left[i] <= right[j]){
			arr[k] = left[i];
			i++;
		}
		else{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = right[j];
		j++;
		k++;
	}
	
}

void mergesort(int arr[],int si,int ei){
	
	if(si >= ei){
		return;
	}
	
	int mid = si + (ei - si)/2;
	mergesort(arr,si,mid);
	mergesort(arr,mid+1,ei);
	
	merge(arr,si,ei);
	
	
}


int main(){
	
	
    // write your code here
    return 0;
}
