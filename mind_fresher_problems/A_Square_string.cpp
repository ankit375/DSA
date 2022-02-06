#include<bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        int n = str.size();
        if(n%2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            int h=n/2;
            string result = "YES";
            for(int i=0;i<h;i++){
                if(str[i]!=str[h+i]){
                    result = "NO";
                    break;
                }
            }
            cout<<result<<endl;
        }
    }
return 0;
}