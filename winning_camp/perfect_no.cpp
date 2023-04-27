#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a number: ";
    cin>>n;
        for(int i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }    
        }
        if(sum==n){
            cout<<"YES! Its a perfect number ";
        }
        else{
            cout<<"NO... Its not a perfect number ";
        }
return 0;
}