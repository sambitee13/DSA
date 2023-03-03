#include<iostream>
using namespace std;
int sumArr(int arr[],int n){
    if(n==0)
        return 0;
    if(n==1)
       return arr[0];
    int remainingpart=sumArr(arr+1,n-1);
    int ans=arr[0]+remainingpart;
    return ans;
}
int main(){
    int arr[]={2,4,5,6,8};
    int n=5;
    int sum=sumArr(arr,n);
    cout<<sum;
return 0;
}