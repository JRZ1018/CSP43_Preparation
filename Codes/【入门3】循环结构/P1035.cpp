#include<iostream>
using namespace std;

int main(){
    double s=0.0;
    int n=1,k;
    cin>>k;
    while (s<=k){
        s+=1.0/n;
        n++;
    }
    cout<<n-1;
    return 0;
}