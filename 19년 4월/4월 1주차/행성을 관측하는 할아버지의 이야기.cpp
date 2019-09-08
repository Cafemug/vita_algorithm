#include <iostream>
using namespace std;
int arr[202][2]={0,};
int big[202]={0,};
int small[202]={0,};
int resmax[202]={0,};
int resmin[202]={0,};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>arr[i][0]>>arr[i][1];
        big[arr[i][1]]++;
        small[arr[i][0]]++;
    }
    for(int i=0;i<m;i++){
        resmax[arr[i][1]]+=(big[arr[i][0]]+1);
        resmin[arr[i][0]]+=(small[arr[i][1]]+1);
    }
    for(int i=1;i<=n;i++){
        cout<<resmax[i]<<" "<<resmin[i]<<"\n";
    }

}