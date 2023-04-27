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
void copy(int a[][3],int b[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[i][j];
        }      
}
}

void display(int x[][3],int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x[i][j]<<"\t";
        }  
        cout<<"\n";

}
}


int main(){
    int a[3][3],b[3][3];
    int n=3;
    create(a,n);
    copy(a,b,n);
    display(b,n);


return 0;
}