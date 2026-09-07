#include<iostream>
using namespace std;

int main(){
    double s,dis=0.0,swim=2.0;
    cin>>s;
    if (s==0){
        cout<<0;
        return 0;
    }
    int pace=0;
    while(dis<s){
        dis+=swim;
        swim*=0.98;
        pace++;
    }
    cout<<pace;
    return 0;
}