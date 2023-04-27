#include<iostream>
#include<vector>
using namespace std;
bool fasinatingNUM(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(v[v[i]]++);
    }
    for(int i=0;i<v.size();i++){
        if(!v[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,twice,thrice,temp;
    cout<<"enter a number: ";
    cin>>n;

    twice =2*n;
    thrice=3*n;
    temp=0;

    vector<int> v(10,0);
     vector<int> vec(10,0);


    while(twice>0){
        temp=twice%10;
        v.push_back(temp);
        twice=twice/10;
    }

    while(n>0){
        temp=n%10;
        v.push_back(temp);
        n=n/10;
    }

    while(thrice>0){
        temp=thrice%10;
        v.push_back(temp);
        thrice=thrice/10;
    }

    cout<<fasinatingNUM(v);

return 0;
}