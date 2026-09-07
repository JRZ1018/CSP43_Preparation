#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/*  long long jc(int a){
    long long res=1;
    for (int i=1;i<=a;i++){
        res*=i;
    }
    return res;
}   */

string plus1(string a, string b){
    long long a_l=a.length(),b_l=b.length();
    if (a_l<b_l) {
        swap(a,b);
        swap(a_l,b_l);
    }
    long long dif=a_l-b_l;
    for (int i=0;i<dif;i++){
        b="0"+b;
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    string c="";
    int temp=0;
    for (int i=0;i<a_l;i++){
        int a1=(a[i]-'0'),b1=(b[i]-'0');
        c += to_string((a1+b1+temp)%10);
        temp=(a1+b1+temp)/10;
    }
    if (temp != 0) c+=to_string(temp);
    reverse(c.begin(),c.end());
    return c;
}

string cheng1(string a, string b){
    long long a_l=a.length(),b_l=b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vector<int> res(a_l+b_l,0);
    
    //核心乘法
    for (int i=0;i<a_l;i++){
        for (int j=0;j<b_l;j++){
            res[i+j] += int(a[i]-'0') * int(b[j]-'0');
        }
    }

    //进位
    int temp=0;
    for (int i=0;i<res.size();i++){
        int temp1=res[i]+temp;
        temp=temp1/10;
        res[i]=temp1%10;
    }

    string c;
    bool flag=false;
    for (int i=res.size()-1;i>=0;i--){
        if (flag==false && res[i]==0) continue;
        flag=true;
        c+=to_string(res[i]);
    }
    if (c.empty()) c="0";
    return c;
}

int main(){
    int n;
    cin>>n;
    string ans="0",t="1";
    for (int i=1; i<=n;i++){
        t=cheng1(t,to_string(i));
        ans=plus1(ans,t);
    }
    cout<<ans;
    return 0;
}


//大数乘法，大数加法