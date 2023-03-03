#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        for(;j>0;j--){
            a[j+1]=a[j];
        }
        temp=a[j+1];
    }
    
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
int main(){
    int a[]={5,4,7,2,6,9};
    int n=sizeof(a)/sizeof(int);
    print(a,n);
    insertionSort(a,n);
    print(a,n);
return 0;
}