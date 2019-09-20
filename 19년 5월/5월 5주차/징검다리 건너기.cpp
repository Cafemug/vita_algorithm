#include <iostream>
using namespace std;
int d[100002]={0,};
int arr[100002]={0,};
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    arr[n+1]=0;
    d[1]=arr[1];
    d[2]=arr[2];
    d[3]=arr[3];
    for(int i=4;i<=n+1;i++){
        d[i]=min(min(d[i-1],d[i-2]),d[i-3])+arr[i];
    }
    cout<<d[n+1];
}