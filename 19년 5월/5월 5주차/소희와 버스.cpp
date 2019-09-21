#include <iostream>
using namespace std;
int arr[101][2];
int main(){
    int n,m,idx=987654321,res=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int count=0;
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]>=m){
            count=arr[i][0];
        }
        else{
            int temp=arr[i][0];
            int t=1;
            while(temp<m){
                temp=arr[i][0]+(arr[i][1]*t);
                t++;
            }
            count=temp;
        }
        if(count<idx){
            res=i;
            idx=count;
        }
            
    }
    cout<<res;
}