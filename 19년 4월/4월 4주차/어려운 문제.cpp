#include <iostream>
using namespace std;
int main(){
    long long int n,res=1;
    cin>>n;
    if(n>=6){
        cout<<9;
    }
    else{
        while(n>0){
            res*=n;
            n--;
        }
        while(res>9){
            int temp=0;
            while(res){
                temp+=res%10;
                res/=10;
            }
            res=temp;
        }
        cout<<res;
    }
}