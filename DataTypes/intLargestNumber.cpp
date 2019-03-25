#include <iostream>
using namespace std;

int main(){
    int x=4294967296;   //Buffer overflow because largest number stored in an int : 2^32=4294967296    
    int y=4294967297;
    int z=x+y;
    int k=2147483645;
    int t=2;   //Buffer wont overflow 
    int s=k+t;

    cout<<"s:"<<s<<endl;

    cout<<"z:"<<z<<endl;
    return 0;

}