#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    int arr[3]={a,b,c};
    string s;
    cin>>s;
    cout<<arr[s[0]-'A']<<' '<<arr[s[1]-'A']<<' '<<arr[s[2]-'A'];
    return 0;
}