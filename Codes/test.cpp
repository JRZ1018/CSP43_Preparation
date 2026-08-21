#include <iostream>
#include <string>
using namespace std;

string reverse_number(string num){
    int res=0;
    while (num[0]=='0'){
        num=num.substr(1);
    }
    for (int i=num.size()-1;i>=0;i--){
        res=res*10+int(num[i]-'0');
    }
    return to_string(res);
}

int main(){
    string s;
    cin>>s;
    size_t numer=s.find(".");
    if (numer!=string::npos){
        //是小数
        string half1=s.substr(0,numer); string half2=s.substr(numer+1);
        cout<<reverse_number(half1)<<"."<<reverse_number(half2);
        return 0;
    }
    else{       //不是小数，讨论其他情况
        size_t divi = s.find("/");
        if (divi!=string::npos){
            string half1=s.substr(0,divi); string half2=s.substr(divi+1);
            cout<<reverse_number(half1)<<"/"<<reverse_number(half2);
            return 0;
        }
        else{
            size_t percent = s.find("%");
            if (percent!=string::npos){         //是百分数
                string s1=s.substr(0,s.size()-1);
                cout<<reverse_number(s1)<<"%";
                return 0;
            }
            else{//是整数
                cout<<reverse_number(s);
            }
        }    
    }

    return 0;
}