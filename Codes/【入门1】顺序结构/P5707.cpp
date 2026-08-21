#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void givetime(int min){
    int hr=min/60;
    min=min%60;
    if (min==0) hr-=1;
    //int outhr=(8-1-hr)>0?(8-1-hr):(8-1-hr+24);
    int outhr;

    if (hr<=7) outhr=8-1-hr;
    else if (hr>7 && hr<=31) outhr=31-hr;
    else outhr=55-hr;

    int outmin=(min==0)?0:(60-min);

    cout<<setfill('0')<<setw(2)<< outhr << ":" <<setw(2)<< outmin;
    return;
}

int main(){
    int s,v;
    cin>>s>>v;
    int time=(s+v-1)/v+10;
    givetime(time);
    return 0;
}