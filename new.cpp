#include<iostream>
using namespace std;

int main(){
    int **q=new int*;
    int *p=new int;
    cin>>*p;
    *q=p;
    cout<<*q<<endl;

    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
    return 0;
}