#include<iostream>
using namespace std;

int arr[21][21][21]={0};

int main(){
    int x,y,z,q,V=0;
    cin>>x>>y>>z;
    for (int i=1;i<=x;i++){
        for (int j=1;j<=y;j++){
            for (int k=1;k<=z;k++){
                arr[i][j][k]=1;
            }
        }
    }
    cin>>q;
    while(q>0){
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for (int i=x1;i<=x2;i++){
            for (int j=y1;j<=y2;j++){
                for (int k=z1;k<=z2;k++){
                    arr[i][j][k]=0;
                }
            }
        }
        q--;
    }
    for (int i=1;i<=x;i++){
        for (int j=1;j<=y;j++){
            for (int k=1;k<=z;k++){
                if(arr[i][j][k]==1) V++;
            }
        }
    } 
    cout<<V;
    return 0;
}