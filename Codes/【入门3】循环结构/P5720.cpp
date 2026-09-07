#include<iostream>
using namespace std;

int main(){
    long res=1;
    long long length;
    cin>>length;
    while(length!=1){
        length/=2;
        res++;
    }
    cout<<res;
    return 0;
}