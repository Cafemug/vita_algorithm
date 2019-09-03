#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long num, residx,resna;
    cin>>num;
    residx=num/5;
    resna=residx/5;
    residx+=resna;
    while(resna>=5){
        resna/=5;
        residx+=resna;
    }
    
    cout<<residx;
}