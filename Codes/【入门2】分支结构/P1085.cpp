#include<iostream>

using namespace std;

int main(){
    int res=0;
    int c=0;
    for (int i=0;i<7;i++){
        int a,b;
        cin>>a>>b;
        if (a+b>8&&a+b>c) {
            res=i+1;c=a+b;
        }
    }
    cout<<res;
    return 0;
}