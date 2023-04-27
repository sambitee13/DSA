#include<iostream>
using namespace std;


int main(){
    int a[3][3];
    int n=3;
    int even=0;
    int odd=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%2 == 0){
                even++;
            }else{
                odd++;

            }
            
        }
    }
    cout<<even<<endl;
    cout<<odd<<endl;
    






return 0;
}