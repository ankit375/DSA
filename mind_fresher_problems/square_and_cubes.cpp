#include<bits/stdc++.h>
using namespace std;

void squareAndCubes(){
    long long n,c=0;
    cin >> n ;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int x1 = (int)sqrt(n) + (int)cbrt(n);
    bool flag = true;
    int z = 1;
    while(flag){
        if(pow(z,6)<n){
            c++;
        }
        z++;
        if(pow(z,6) > n)flag=false;
    }
    cout<< x1-c<<endl;
}


int main(){
    int t=1;
    cin>>t;

    while(t--){
        squareAndCubes();
    }
}