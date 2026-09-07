#include<iostream>
using namespace std;

int main(){
    int n,count=1,mx=1;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
        if (i>=1){
            if (arr[i]==arr[i-1]+1){
                count++;
                if (mx<count) mx=count;
            }
            else count=1;
        }
    }
    cout<<mx;
    return 0;
}