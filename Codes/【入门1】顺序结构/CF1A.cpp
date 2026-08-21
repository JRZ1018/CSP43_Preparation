#include <iostream>
using namespace std;

long long chu(long long a,long long b){
    if (a%b==0) return a/b;
    else if (a==0) return 1;
    else return a/b+1;
}

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<chu(n,a)*chu(m,a);
    return 0;
}