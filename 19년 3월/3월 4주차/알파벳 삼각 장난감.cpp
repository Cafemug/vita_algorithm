#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector <string> v(2002);
int d[2002][2002]={0};
int main(){
    int num,res=0;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>num;
    for (int i= 0; i<num ;i++){
        cin>>v[i];
    }
    d[0][0]=v[0][0]-64;
    for(int i=1;i<num;i++){
        d[i][0]=(v[i][0]-64)+d[i-1][0];
        for(int j=1;j<i;j++){
            d[i][j]=(v[i][j]-64)+max(d[i-1][j-1],d[i-1][j]);
        }
        d[i][i]=(v[i][i]-64)+d[i-1][i-1];
    }
    for(int i=0;i<num;i++){
        if(res<d[num-1][i])
            res=d[num-1][i];
    }
    cout<<res;

    

}