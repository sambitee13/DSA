//you have given an array of size N. where N is equal to [2m+1].
//now in the given array 'm' numbers are present twice and one number is present only once.
// you need to find and return that number which is unique.

#include<iostream>
using namespace std;
int main(){
int sum=0;
int arr[]={1,1,2,2,3,4,4};
for(int i=0;i<7;i++){
    sum=sum^arr[i];
}
cout<<sum;
return 0;
}