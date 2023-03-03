#include<iostream>
using namespace std;
void swap_elements(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr1[5]={1,2,3,4,5};

    swap_elements(arr,6);
    print_array(arr,6);
    swap_elements(arr1,5);
    print_array(arr1,5);

return 0;
}