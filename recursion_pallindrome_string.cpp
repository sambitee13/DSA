#include<iostream>
using namespace std;
bool palin(string s,int i,int j){
    if(i>j){
        return true;
    }
    if(s[i]==s[j]){
        return palin(s,i+1,j-1);
    }
    else{
        return false;
    }
    
}
int main(){
    string name="abba";
    bool ans= palin(name,0,name.length()-1);
    if(ans){
        cout<<"is palindrome";
    }
    else{
        cout<<"not palindrome";
    }
return 0;
}