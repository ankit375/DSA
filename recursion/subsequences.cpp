#include<bits/stdc++.h>
using namespace std;

int subs(string input,string output[]){
	
//	if string is empty
	if(input.empty()){
		output[0]=" ";
		return 1;
	}
	
	string smallString = input.substr(1);
	int smalloutputsize = subs(smallString,output);
	for(int i=0;i<smalloutputsize;i++){
		output[i+smalloutputsize] = input[0] + output[i];
	}
	return 2*smalloutputsize;
}


int main(){
	
	string input;
	cin>>input;
	
	string* output = new string[1000];
	int count = subs(input,output);
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}
	
	
	
    // write your code here
    return 0;
}
