#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei){

    int pivot = arr[si];

    int count = 0;

    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotindex = si  + count;
    swap(arr[pivotindex],arr[si]);

    //left and right wala part
    int i = si, j= ei;

    while(i < pivotindex && j > pivotindex) {

        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i<pivotindex && j>pivotindex) {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;

}


void quicksort(int arr[],int si,int ei){

    if(si>=ei){
        return;
    }

    int p = partition(arr,si,ei);

    quicksort(arr,si,p-1);
    quicksort(arr,p+1,ei);

 
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    for (int i = 0; i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}