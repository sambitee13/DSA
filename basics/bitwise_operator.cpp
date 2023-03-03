#include <iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
     cout<<"a&b "<<(a&b)<<endl; //and prints smaller one
          cout<<"a|b "<<(a|b)<<endl; // or prints the larger one
     cout<<"(XOR) a^b "<<(a^b)<<endl;// subtraction
     cout<<"~b "<<(~b)<<endl;//-(b+1)
     //right shift
cout<<(17>>1)<<endl;//17/2
cout<<(17>>2)<<endl;//17/(2*2)
//left shift
cout<<(19<<1)<<endl;//19*2
cout<<(21<<2)<<endl;//21*2*2

}