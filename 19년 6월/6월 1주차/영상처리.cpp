#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char arr[1005][1005];
int ix[]={0,0,-1,1};
int iy[]={1,-1,0,0};
int n,m,k=0,temp=0;
void dfs(int x,int y){
    arr[x][y]='.';
    temp++;
    for(int i=0;i<4;i++){
        int tx=x+ix[i];
        int ty=y+iy[i];
        if(tx>=n || tx<0 || ty<0||ty>=m ||arr[tx][ty]=='.'){
            continue;
        }
        else{
            dfs(tx, ty);
        }
            
        

    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int res=0;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='#'){
                
                dfs(i,j);
				k++;
                if(res<temp)
                    res=temp;
                temp=0;
            }
        }
    }
    cout<<k<<"\n"<<res;
}