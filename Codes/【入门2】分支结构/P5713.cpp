#include <iostream>
using namespace std;

int main(){
    int x,local,luogu;
    cin>>x;
    local=x*5;
    luogu=11+x*3;
    if (local<luogu) cout<<"Local";
    else cout<<"Luogu";
    return 0;
}