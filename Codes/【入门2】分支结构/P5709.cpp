#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m,t,s;
    cin>>m>>t>>s;
    if (t==0){
        cout<<0;
        return 0;
    }
    int leftt=m-(t+s-1)/t;
    if (leftt<=0) leftt=0;
    cout<<leftt;
    return 0;
}