#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    cout<<"You have entered : "<<x<<endl;
    cerr<<"This is Error Stream"<<endl;
    clog<<"This is Log Stream"<<endl;
    return 0;
}