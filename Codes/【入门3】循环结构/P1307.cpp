#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;
    cin>>N;
    if (N=="0" or N=="-0") {cout<<0 ;return 0;}
    bool flag=0;
    string N1;
    if (N[0]=='-'){
        flag=1;
        N1=N.substr(1);
    }
    else N1=N;

    reverse(N1.begin(),N1.end());

    while (N1[0]=='0'){
        N1=N1.substr(1);
    }
    if (flag) cout<<'-'+N1;
    else cout<<N1;

    return 0;
}