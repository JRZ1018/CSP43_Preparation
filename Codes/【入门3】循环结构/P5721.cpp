#include<iostream>
#include<string>
using namespace std;

string ntos1(int a){
    if (a<10) return string("0")+ char('0'+a);
    else return string("")+char('0'+a/10)+char('0'+a%10);
}

int main(){
    int n,count=1;
    cin>>n;
    for(int i=n;i>0;i--){
        for (int j=1;j<=i;j++){
            cout<<ntos1(count);
            count++;
            if (j==i) cout<<endl;
        }
    }
    return 0;
}