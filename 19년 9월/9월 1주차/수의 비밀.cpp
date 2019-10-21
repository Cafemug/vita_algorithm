#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    while(a>1){
        if(a%2){
            cout<<"No";
            return 0;
        }
        a/=2;
    }
    cout<<"Yes";
}