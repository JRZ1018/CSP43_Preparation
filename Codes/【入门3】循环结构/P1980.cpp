#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,count=0;
    cin>>n>>x;
    string a="";
    for (int i=1;i<=n;i++){
        a+=to_string(i);
    }
    for (int i=0;i<a.length();i++){
        if (a[i]== char(x+'0')) count++;
    }
    cout<<count;
    return 0;
}