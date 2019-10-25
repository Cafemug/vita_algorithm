#include <iostream>
#include <cstring>
using namespace std;
long long arr[21];
long long check[21];
long long a,b,count=0;
void dfs(long long t,long long total){
    if(total==b-arr[0]){
        count++;
    }
    for(long long i=t;i<a;i++){
        if(check[i]) continue;
        check[i]=1;
        dfs(i,total+arr[i]);
        check[i]=0;
    }

}
int main(){
    
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    dfs(1,0);
    cout<<count;
}