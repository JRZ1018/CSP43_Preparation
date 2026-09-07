#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,res=INT_MAX;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<a;i++){
        if (arr[i]<res) res=arr[i];
    }
    cout<<res;
    return 0;
}