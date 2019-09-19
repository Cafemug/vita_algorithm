#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
int arr2[1000001];
int main(){
    int n,len=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int *pos = lower_bound(arr2, arr2+len,arr[i]);
        *pos = arr[i];
        len+=(pos==arr2+len);
    }
    cout<<n-len;

}