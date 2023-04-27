#include<iostream>
using namespace std;
void display (int a[],int n){
    for (int i=0;i<n;i++){
    cout<<a[i]<<"\t";

}
}
int main(){
int a[5];
int n=5;
cout<<"enter 5 no.s ";
for (int i=0;i<n;i++){
    
    cin>>a[i];
}
display(a,n);
return 0;
}