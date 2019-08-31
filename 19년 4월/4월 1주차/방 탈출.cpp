#include <iostream>
#include <algorithm>
using namespace std;
long long arr[200002]={0,};
int bin(int x,int start,int end){
    if(start>end)
        return 0;
    int mid=(start+end)/2;
    if(x==arr[mid])
        return 1;
    if(x<arr[mid])
        bin(x,start,mid-1);
    else
        bin(x,mid+1,end);
   
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int check=0;
    int n,m;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    for(int i =0;i<m;i++){
        int temp2;
        cin>>temp2;
        cout<<bin(temp2,0,n)<<"\n";
    }
 
}