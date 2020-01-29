#include<iostream>

using namespace std;
int main()
{
    float principle;
    principle=10000;
    for(int i=0;i<30;i++)
        principle*=1.01;
    
    cout << "your invested principal of $10000 has become $"<< principle <<endl;
   
    
}