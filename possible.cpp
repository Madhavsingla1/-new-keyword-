#include<iostream>
using namespace std;

int main(){
    cout<<"USING new KEYWORD"<<endl;
    int **q=new int*;
    int *p=new int;
    cin>>*p;
    *q=p;
    cout<<*q<<endl;

    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
    // only value at the dynamically alloted pointer is deleted
    // pointer is still there
    cout<<*q<<endl;
    return 0;
}