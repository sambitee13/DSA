#include<iostream>
using namespace std;
bool searchele(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+ (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return searchele(arr,s,mid-1,k);
    }
    else{
        return searchele(arr,mid+1,e,k);
    }
   
}
int main(){
    int arr[]={2,4,5,6,8};
    int n=5;
    int k=8  ;
    bool ans=searchele(arr,0,n,k);
    cout<<ans;

return 0;
}