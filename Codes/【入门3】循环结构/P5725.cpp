#include<bits/stdc++.h>
using namespace std;

string ntos1(int a){
    if (a<10) return string("0")+ char('0'+a);
    else return string("")+char('0'+a/10)+char('0'+a%10);
}

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n*n;i++){
        cout<<ntos1(i);
        if (i%n==0) cout<<endl;
    }
    cout<<endl;
}