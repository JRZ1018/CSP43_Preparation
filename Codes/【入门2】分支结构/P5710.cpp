#include<iostream>
using namespace std;
int main(){
    int flag=0,x;
    cin>>x;
    if (x%2==0) flag++;
    if (x<=12&&x>4) flag++;
    if (flag==2) cout<<1<<' ';
    else cout<<0<<' ';
    
    if (flag>=1) cout<<1<<' ';
    else cout<<0<<' ';
    if (flag==1) cout<<1<<' ';
    else cout<<0<<' ';
    if (flag==0) cout<<1;
    else cout<<0;
    return 0;
}