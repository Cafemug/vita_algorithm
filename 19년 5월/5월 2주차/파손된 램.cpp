#include <iostream>
using namespace std;
int arr[101];
int main(){
    int n,count=1,i=0;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        if(m%2==1){
            arr[i]=count;
            i++;
            count++;
            continue;
        }
        while(m>1){
            if(m%2==1){
                arr[i]=count;
                i++;
                break;
            }
            m/=2;
        }
        count++;
    }
    cout<<i<<"\n";
    for(int t=0;t<i;t++){
        cout<<arr[t]<<" ";
    }
}