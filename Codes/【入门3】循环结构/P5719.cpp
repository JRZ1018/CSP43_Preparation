#include<iomanip>
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> A,B;
    for (int i=1;i<=n;i++){
        if(i%k==0) A.push_back(i);
        else B.push_back(i);
    }
    double a=accumulate(A.begin(),A.end(),0.0);
    double b=accumulate(B.begin(),B.end(),0.0);
    cout<<fixed<<setprecision(1)<< a/A.size() <<" "<<fixed<<setprecision(1)<< b/B.size();
    return 0;

}