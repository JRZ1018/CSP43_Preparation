#include<iostream>
using namespace std;

int main(){
    int saving=0,hand=0;
    for (int i=1;i<=12;i++){
        hand+=300;
        int budget;
        cin>>budget;
        if (hand<budget){
            cout<<-(i);
            return 0;
        }
        hand-=budget;
        saving+=(hand/100)*100;
        hand-=(hand/100)*100;
    }
    cout<<int(saving*1.2)+hand;
    return 0;
}