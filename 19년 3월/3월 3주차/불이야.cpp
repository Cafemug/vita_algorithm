#include <iostream>
#include <queue>
#include <cstdlib>
#include <cstring>
using namespace std;
bool check[1003][1003];
char board[1003][1003];
int a,b;
int ix[]={-1,1,0,0};
int iy[]={0,0,1,-1};
queue<pair<int,int>> q;
int bfs(){
    int count = 0;
    while(!q.empty()){
        int sq=q.size();
        for(int x=0;x<sq;x++){
            pair<int,int> p = q.front();
            q.pop();
            int tx=p.first;
            int ty=p.second;
            for(int i=0;i<4;i++){
                int rx = tx+ix[i];
                int ry = ty+iy[i];
                if(board[rx][ry]=='&')
                    return count;
                if(rx>a || rx<1 || ry>b ||ry<1 || check[rx][ry]==true || board[rx][ry]=='#')
                    continue;
                else{
                    check[rx][ry]=true;
                    
                    q.push(make_pair(rx,ry));
                }
                
            }
        }
        count++;
      
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(check,false,sizeof(check));
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin>>board[i][j];
            if(board[i][j]=='@'){
                q.push(make_pair(i,j));
            }
        }
    }
    int res = bfs();
    cout<<res;
}