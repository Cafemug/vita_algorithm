#include <iostream>
using namespace std;
int minarr[202]={0,};
int maxarr[202]={0,};
int arr1[202]={0,};
int arr2[202]={0,};
int maxres[202]={0,};
int minres[202]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>arr1[i]>>arr2[i];
        minarr[arr1[i]]++;
        maxarr[arr2[i]]++;
    }
    for(int i=0;i<m;i++){
        minres[arr1[i]]+=(1+minarr[arr2[i]]);
        maxres[arr2[i]]+=(1+maxarr[arr1[i]]);
    }
    for(int i=1;i<=n;i++){
        cout<<maxres[i]<<" "<<minres[i]<<"\n";
    }
}