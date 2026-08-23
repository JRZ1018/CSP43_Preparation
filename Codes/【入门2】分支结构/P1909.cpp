#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num,res=INT_MAX;
    cin>>num;
    int arr1[3],arr2[3];
    for (int i=0;i<3;i++){
        cin>>arr1[i]>>arr2[i];
        int p=(arr1[i]+num-1)/arr1[i]*arr2[i];
        if (p<res) res=p;
    }
    cout<<res;
    return 0;
}