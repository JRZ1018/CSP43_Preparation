#include<iostream>
using namespace std;

int main(){
    int n,arr[10001],count=0;
    cin>>n;
    if (n==1){
        cout<<1;
        return 0;
    }
    while (n!=1){
        arr[count]=n;
        count++;
        if (n%2==0) n/=2;
        else n=n*3+1;
    }
    cout<<1<<' ';
    for (int i=count-1;i>=0;i--){
        cout<<arr[i]<<' ';
    }
    return 0;

}