#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr1[9];
    string input;
    cin>>input;
    int arr2[9]={0,2,3,4,6,7,8,9,10};
    for(int i=0;i<=8;i++){
        arr1[i]=(input[arr2[i]]-'0');
    }
    int code,sum;
    sum=0;
    for(int i=0;i<=8;i++){
        sum+=(i+1)*arr1[i];
    }
    code=sum%11;
    if ((input[12]-'0')==code) cout<<"Right";
    else cout<<input.substr(0,12)<<to_string(code);
    return 0;
}