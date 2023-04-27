#include<iostream>
using namespace std;
int main(){
int a[3][3];
    int n=3;
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
             if(a[i][j]==0){
            count++;
           } 
        }
    }
    
    if(count>=((n*n)/2)){
        cout<<"its a sparse matrix";
    }
    else{
        cout<<"its not a sparse matrix";

    }
    



return 0;
}