#include<iostream>
using namespace std;

int main(){
    int x,n,sum=0;
    cin>>x>>n;

    for(int i=x;i<x+n;i++){
        if (i%7==6 or i%7==0) sum+=0;
        else sum+=250;
    }
    cout<<sum;
    return 0;
}