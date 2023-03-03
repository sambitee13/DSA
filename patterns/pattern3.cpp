#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k,i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            k=n-j+1;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
}
