#include <iostream>
using namespace std;
long long arr[200001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,m,i=0,j=2,count=0;
    cin>>n>>m;
    for(long long t=0;t<n;t++){
        cin>>arr[t];
    }
    while(i<=j){
        if(j>n)
            break;
        long long temp=0;
        for(long long x=i;x<j;x++){
            temp+=arr[x];
        }
        if(temp>=m){
            if(temp==m)
                count++;
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count;
}