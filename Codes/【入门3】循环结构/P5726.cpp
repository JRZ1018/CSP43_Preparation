#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
    int n,sum=0,maxn=-1,minn=11;
    cin>>n;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        maxn=max(a,maxn);
        minn=min(a,minn);
    }
    sum=sum-maxn-minn;
    double ans=double(sum)/(n-2);
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}