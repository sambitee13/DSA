#include<iostream>
using namespace std;

bool isEven(int n){
    int ans;
    //even: 1 bool => true
    //odd: 0 =>false

    if(n&1){
        //n&1 gives 1 => odd
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    if(isEven(n)){
        cout<<"is even no. ";
    }
    else{
        cout<<"is odd no.";
    }

}