#include <iostream>
using namespace std;
int minarr[202]={0,};
int maxarr[202]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        minarr[a]++;
        maxarr[b]++;
    }
    for(int i=1;i<=n;i++){
        cout<<minarr[i]<<" "<<maxarr[i]<<"\n";
    }
}