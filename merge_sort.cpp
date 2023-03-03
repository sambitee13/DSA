#include<iostream>
using namespace std;
void merge(int *a,int s,int mid,int e){
    int b[e+1];
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    if(i>mid){
        while(j<=e){
        b[k++]=a[j++];
    }
    }
    else{
        while(i<=mid){
        b[k++]=a[i++];
    }
    }
    for(int k=s;k<=e;k++){
        a[k]=b[k];
    }
}
void merge_sort(int *a,int s,int e){
    if(s>=e){
        return;
    }
        int mid=s+(e-s)/2;
        merge_sort(a,s,mid);
        merge_sort(a,mid+1,e);
        merge(a,s,mid,e);
     
}
int main(){
    
    int n=5;
    int a[n]={8,3,7,1,6};

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    } cout << endl;

    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    } cout << endl;
return 0;
}