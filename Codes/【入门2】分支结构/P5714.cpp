#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double m,h,bmi;
    cin>>m,h;
    bmi=m/h/h;
    if (bmi<18.5) cout<<"Underweight";
    else if (bmi<24) cout<<"Normal";
    else cout<<setprecision(6)<<bmi<<endl<<"Overweight";
    return 0;
}