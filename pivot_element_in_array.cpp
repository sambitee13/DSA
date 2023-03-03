#include<iostream>
using namespace std;
int getPivot(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=s + (e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s + (e-s)/2;
    }
    return s;
    

}
int main(){
    int arr[5]={6,7,8,1,2};
    cout<<"pivot element is at index "<<getPivot(arr,5);
    return 0;
}