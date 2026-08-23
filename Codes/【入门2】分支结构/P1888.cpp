#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    while (b!=0){
        int c= a%b;
        a=b;
        b=c;
    }
    return a;
}

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    long long gd=gcd(a,c);
    cout<<a/gd<<"/"<<c/gd;
    return 0;
}