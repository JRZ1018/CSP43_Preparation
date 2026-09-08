#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int arr[10001]={0};

int main(){
    int l,m;
    cin>>l>>m;
    fill(arr,arr+l+1,1);
    for (int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        fill(arr+u,arr+v+1,0);
    }
    int sum= accumulate(arr,arr+l+1,0);
    cout<<sum;
    return 0;
}