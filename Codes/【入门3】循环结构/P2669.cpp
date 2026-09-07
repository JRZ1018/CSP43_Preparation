#include<iostream>
using namespace std;

int main(){
    int k,day,money=1,ld=1,res=0;
    cin>>k;
    while(k>0){
        res+=money;
        ld--;
        if (ld==0){
            money++;
            ld=money;
        }
        k--;
    }
    cout<<res;
    return 0;
}