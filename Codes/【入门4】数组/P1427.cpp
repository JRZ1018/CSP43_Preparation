#include<iostream>
using namespace std;
int main(){
    int n,arr[10001];
    for(int i=1;;i++){
        int t;
        cin>>t;
        if (t==0){
            n=i;
            break;
        }
        else arr[i]=t;
    }
    for (int i=n-1;i>0;i--) cout<<arr[i]<<' ';
    return 0;
}