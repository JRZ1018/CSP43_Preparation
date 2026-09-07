#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void isPrime();

int main(){
    long a,b;
    cin>>a>>b;
    prime.resize(b+1,true);
    isPrime(b);
    for (int i=a;i<b+1;i++){
        if (prime[i]){
            string c,d;
            c=d=to_string(i);
            reverse(c.begin(),c.end());
            if (c==d) cout<<d<<endl;
        }
    }
    return 0;
}

vector<bool> prime;
void isPrime(long b){
    prime[0]=prime[1]=false;
    for (long i=2;i*i<=b;i++){
        if (prime[i]){
            for (long j=i*i;j<=b;j+=i){
                prime[j]=false;
            }
        }
    }
}
//质数筛

