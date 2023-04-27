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

void transpose(int x[][3],int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x[j][i]<<"\t";
        }  
        cout<<"\n";

}
}

int main(){
    int a[3][3];
    int n=3;
    create(a,n);
    transpose(a,n);


return 0;
}