#include<bits/stdc++.h>
using namespace std;

int binarySearch(int input[],int l,int r,int x){

    int mid = l + (r - l)/2;

    while(l<=r){

        if(input[mid]== x){
            return mid;
        }

        else if(input[mid] <= x){
             l = mid + 1;
        }
        else{
            r = mid - 1 ;
        }
        mid = l + (r - l)/2;

    }
    return -1;
    
}


int binarySearch(int input[], int size, int element) {
    // Write your code here

    return binarySearch(input, 0,size-1,element);
}



int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
