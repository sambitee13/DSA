#include<iostream>
using namespace std;
void reversestr(string & str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reversestr(str,i,j);
}
int main(){
    string n= "absdffg";
    reversestr(n,0,n.length()-1);
    cout<<n;
    
return 0;
}