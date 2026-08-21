#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int total=20000;
    int h,r;
    cin>>h>>r;
    double V=h*r*r*3.14;
    cout<<ceil(total/V);
    return 0;
}