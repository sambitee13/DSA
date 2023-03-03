#include<iostream>
using namespace std;

void reverse_array(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void print_array(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;  
}
int main(){

int arr[100];
int n;
cin>>n;

for(int i=0;i<n;i++){
    cin>>arr[i];
}
print_array(arr,n);
reverse_array(arr,n);
print_array(arr,n);


return 0;
}