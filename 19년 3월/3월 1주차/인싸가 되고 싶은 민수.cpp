#include <iostream>
#include <cstring>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  int res=0;
  cin>>n>>m;
  if (n!=m){
    cout<<2;
  }
  else{
		res=m;
    for (int i=2;i*i<=m;i++){
      if(n%i==0){
				res=i;
        break;
      }
    }
		cout<<res;
  }
}