#include<iostream>
using namespace std;

void create(int x[][3],int n){
    cout<<"enter elements in the array";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x[i][j];
        }      
}
}

void sum(int a[][3],int b[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]+b[i][j];
        }
    }
}

int main(){
int a[3][3],b[3][3];
int n=3;
create(a,n);
create(b,n);
sum(a,b,n);
return 0;
}