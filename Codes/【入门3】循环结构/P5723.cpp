#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a){
    if (a<=1) return false;
    if (a==2 or a==3) return true;
    if (a%2==0) return false;
    for (int i=3;i<=sqrt(a);i+=2){
        if (a%i==0) return false;
    }
    return true;
}

int main(){
    int n,t1=2;
    cin>>n;
    int sum=0,count=0;
    while (sum<n){
        if (isPrime(t1)){
            if (sum+t1<=n){
                sum=sum+t1;
                cout<<t1<<endl;
                count++;
            }
            if (sum+t1>n) sum+=t1;
        }
        t1++;
    }
    cout<<count;
    return 0;
}


//判断质数