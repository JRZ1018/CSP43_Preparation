#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float total;
    float n;
    cin>>total>>n;
    cout<<fixed<<setprecision(3)<<total/n<<endl;
    cout<<int(n*2);
    return 0;
}