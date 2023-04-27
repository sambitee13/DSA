//strong number => sum of(factorial of digits of number) = the number itself
#include<iostream>
using namespace std;

int main(){
    int n;
    int temp=0;  
    int sum=0;
    cout<<"enter a number: ";
    cin>>n;
    int num=n;
    while(num>0){
        temp=num%10;
        int fact=1;
        for(int i=temp;i>0;i--){
            fact=fact*i;
        }
        sum+=fact;
        num=num/10;
    }
    cout<<sum;

    if(sum==n){
        cout<<"\n its a strong number";
    }
    else{
        cout<<"\n its not a strong number ";
    }
return 0;
}