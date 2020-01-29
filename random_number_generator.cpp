#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int vol(int l=1,int w=5,int h=6){
    return l*w*h;
}
int main()
{
    
    srand(time(0));
    cout<< rand()%99<< endl;
    cout<< vol(5,1);
}