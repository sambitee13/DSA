#include<iostream>
using namespace std;
int main(){

    string str;

    cout<<"enter a string to check pallindrome or not; \n";
    cin>>str;
    int n= str.length()-1;
    int i=0;

    while(i<n){
        if(str[i++]!=str[n--]){
            cout<<"not";
            return 0;
        }
    }
    cout<<"yes";
return 0;
}