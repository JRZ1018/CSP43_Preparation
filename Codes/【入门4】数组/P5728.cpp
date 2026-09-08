#include<iostream>
using namespace std;

int main(){
    int arr[10001][3],N,count=0;
    cin>>N;
    if (N==1 || N==0){
        cout<<0;
        return 0;
    }
    for (int i=0;i<N;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i][0]=a;
        arr[i][1]=b;
        arr[i][2]=c;
    }
    for (int i=0;i<N-1;i++){
        for (int j=i+1;j<N;j++){
            if (abs(arr[i][0]-arr[j][0])<=5 && 
                abs(arr[i][1]-arr[j][1])<=5 &&
                abs(arr[i][2]-arr[j][2])<=5 &&
                abs(arr[i][0]-arr[j][0]+arr[i][1]-arr[j][1]+arr[i][2]-arr[j][2])<=10) count++;
        }
    }
    cout<<count;
    return 0;
}