#include <iostream>
using namespace std;
long long xorsum(long long num){
    int res;
    if (num<0) return 0;
    if(num&1){
        long long temp = (num+1)/2;
        return (temp&1);
    }
    else{
        long long temp = (num)/2;
        return (num^(temp&1));
    }

}
int main(){
    long long n,m;
    cin>>n>>m;
    cout<<(xorsum(n-1)^xorsum(m));
}