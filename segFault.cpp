#include<iostream>
using namespace std;

int main(){
    
    int *p;
    cin>>*p;
    
    cout<<*p<<endl;

    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
    // only value at the dynamically alloted pointer is deleted
    // pointer is still there
    
    return 0;
}