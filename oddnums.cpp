#include<iostream>
using namespace std;
int isOdd(long long arr[],long long n){
    long long i;
    for(i=0;i<n;i++)
        if (arr[i]%2==0)
            return 0;
    return 1;

}
long long maxEven(long long arr[],long long n){
    long long maxe=0;
    long long i;
    for(i=0;i<n;i++)
        if(arr[i]%2==0 && arr[i]>maxe)
            maxe=arr[i];
    return maxe;
}

int main(){
    long long t;
    
}