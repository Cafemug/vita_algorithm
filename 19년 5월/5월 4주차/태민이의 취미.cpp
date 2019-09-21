#include <iostream>
using namespace std;
int main(){
    long long n,res=0;
    cin>>n;
    res=n*(n+1)/2%1000000007;
    cout<<res*res%1000000007;
}