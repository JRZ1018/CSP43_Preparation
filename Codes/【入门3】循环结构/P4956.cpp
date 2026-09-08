#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for (int k=1;;k++){
        for (int x=100;x>=0;x--){
            if (52*(7*x+21*k)==N){
                cout<<x<<endl<<k;
                return 0;
            }
        }
    }
}