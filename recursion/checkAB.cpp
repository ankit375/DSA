#include<bits/stdc++.h>
using namespace std;

bool solver(char input[]){

    if(input[0] == '\0'){
        return true;
    }

    bool smallsolver;
    if(input[0] == 'a' && (input[1] == '\0' || input[1] == 'a')){
        smallsolver = solver(input+1);
    }
    else if(input[0] == 'a' && input[1] == 'b' && input[2] == 'b'){
        smallsolver = solver(input+1);
    }
    else if(input[0] == 'b' && input[1] == 'b' && (input[2] == 'a' || input[2] == '\0')){
        smallsolver = solver(input+2);
    }
    else{
        return false;
    }
return smallsolver;

}


bool checkAB(char input[])
{
    if(input[0] == '\0'){
        return true;
    }
    else if(input[0] != 'a'){
        return false;
    }
    return solver(input);
}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
