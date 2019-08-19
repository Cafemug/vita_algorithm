#include <iostream>
#include <cstring>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin>>s;
  if(s.find("12")!=string::npos){
    int idx = s.find("12");
    s.erase(idx,2);
    if(s.find("21")!=string::npos){
      cout<<"Yes";
    }
    else{
      cout<<"No";
    }
  }
  else{
    cout<<"No";
  }
}