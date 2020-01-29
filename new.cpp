#include<iostream>
using namespace std;

int main(){
    int *p=new int;
    cin>>*p;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
    return 0;
}