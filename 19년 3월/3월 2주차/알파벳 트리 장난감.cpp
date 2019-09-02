#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> v(22);
int minval=987654321, maxval=0;
int num;
void bin(int depth,int idx,int val){
    if(depth>=num){
        minval = min(minval,val);
        maxval = max(maxval,val);
        return;
    }
    bin(depth+1, idx*2,val+v[depth][idx]-64);
    bin(depth+1, idx*2+1,val+v[depth][idx]-64);

} 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>num;
    for (int i= 0; i<num ;i++){
        cin>>v[i];
    }
    bin(0,0,0);
    cout<<minval<<"\n"<<maxval;
    

    

}