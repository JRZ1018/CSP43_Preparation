#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int power;
    cin>>power;
    if (power<=150) cout<<fixed<<setprecision(1)<<0.4463*power;
    else if (power<=400) cout<<fixed<<setprecision(1)<<0.4463*150+(power-150)*0.4663;
    else cout<<fixed<<setprecision(1)<<0.4463*150+(250)*0.4663+(power-400)*0.5663;
    return 0;
}