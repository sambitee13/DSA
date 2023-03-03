#include<iostream>
using namespace std;
bool searchele(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return searchele(arr+1,n-1,k);
}
int main(){
    int arr[]={2,4,5,6,8};
    int n=5;
    int k=3  ;
    bool ans=searchele(arr,n,k);
    cout<<ans;

return 0;
}