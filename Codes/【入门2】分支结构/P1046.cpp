#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int h;
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    cin>>h;
    int res=0;
    for (int i=0;i<10;i++){
        if (arr[i]<=h+30) res++;
    }
    cout<<res;
    return 0;
}