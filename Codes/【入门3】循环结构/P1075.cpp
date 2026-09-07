#include<iostream>
#include<vector>
using namespace std;

int main(){
    long k;
    cin>>k;
    
    for (int i=2;i<k;i++){
        if (k%i==0){
            cout<<k/i;
            return 0;
        }
    }
}