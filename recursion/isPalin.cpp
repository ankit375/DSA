#include<bits/stdc++.h>
using namespace std;

bool isPalin(string str,int l,int r){

    if(l>=r){
        return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
    return isPalin(str,l+1,r-1);

}

int main(){
    string str;
    cin >> str;

    if(isPalin(str,0,str.size()-1)){
        cout << "true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}