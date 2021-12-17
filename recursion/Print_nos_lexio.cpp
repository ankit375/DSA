#include<bits/stdc++.h>
using namespace std;

void lexio(int x,int n){

    if(x>n) return;
    if(x==n){
        cout<<x<<endl;
        return;
    }

    if(x!=0){
        cout<<x<<endl;
    }
    for(int i= (x==0) ? 1 : 0; i<=9; i++){
        lexio(10*x+i,n);
    }


}



int main(){
    lexio(0,15);
}