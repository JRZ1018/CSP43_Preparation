#include<iostream>
#include<iomanip>
#include<cmath>
// 填上你觉得需要的其他头文件
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout<<3<<endl<<12<<endl<<2<<endl;

    } else if (T == 4) {
        cout<<setprecision(6)<<500.0/3;
    } else if (T == 5) {
        cout<<480/32;
    } else if (T == 6) {
        cout<<sqrt(9*9+6*6);
    } else if (T == 7) {
        cout<<110<<endl<<90<<endl<<0;
    } else if (T == 8) {
        cout<<10*3.141593<<endl<<3.141593*25<<endl<<4.0/3*3.141593*125;
    } else if (T == 9) {
        // 请自行完成问题 9 的代码
        cout<<22;
    } else if (T == 10) {
        // 请自行完成问题 10 的代码
        cout<<9;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout<<100/3.0;
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout<<13<<endl<<"R";
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
        double V=4.0/3*3.141593*(64+1000);
        cout<<int(pow(V,1.0/3));
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout<<50;
    }
    return 0;
}
