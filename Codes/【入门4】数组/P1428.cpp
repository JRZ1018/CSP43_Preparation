#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10001]={0},arr2[10001]={0};
    for (int i=0;i<n;i++){
        int t;
        cin>>t;
        arr[i]=t;
        for(int j=0;j<=i;j++){
            if (arr[j]<arr[i]){
                arr2[i]++;
            }
        }
        if (i<n-1) cout<<arr2[i]<<" ";
        else cout<<arr2[i];
    }
    return 0;
}