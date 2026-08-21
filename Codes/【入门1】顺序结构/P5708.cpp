#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,p;
    cin>>a>>b>>c;
    p=0.5*(a+b+c);
    double S;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<S;
    return 0;
}