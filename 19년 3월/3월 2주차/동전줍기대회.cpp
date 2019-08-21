#include <iostream>
using namespace std;
long long temp[100003]={0,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    for (int i= 0; i<num ;i++){
        cin>>temp[i];
    }
    long long res=temp[0];
    long long ans=-987654321;
    for (int i= 1; i<num ;i++){
        res= max(res+temp[i],temp[i]);
        ans=max(res,ans);
    }
    cout<<ans;
}