#include <iostream>
using namespace std;
int arr[100001];
int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=2;
    while(left<=right){
        cout<<left<<" "<<right<<"\n";
        if(right>n)
            break;
        if(arr[left]*arr[right-1]>=0){
            right++;
        }
        else{
            int temp=0;
            for(int i=left;i<right;i++){
                temp+=arr[i];
            }
            if(temp==0){
                count++;
                left++;
            }else{
                if(arr[right]*temp>0){
                    left++;
                }
                else{
                    right++;
                }
            }
            
        }
    }
    cout<<count;
}