#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,res;
    cin>>a>>b;
    long long tx1,ty1,tx2,ty2,tmp;
    tx1=a/20;
    ty1=b/40;
    tx2=a/40;
    ty2=b/20;
    tmp=2*(a/40)*(b/40);
    res=((tx1*ty1)+(tx2*ty2));
    cout<<res-tmp;
}