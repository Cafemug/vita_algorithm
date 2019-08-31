#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<char,int>> res;
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(res.size()==0){
            res.push_back(make_pair(s[i],1));
        }
        else{
            pair<char, int> p =res.back();
            if(p.first==s[i]){
                res.push_back(make_pair(s[i],p.second+1));
            }
            else{
                if(p.second>=m){
                    for(int t=0;t<p.second;t++){
                        res.pop_back();
                       
                    }
                    i--;
                }
                else
                    res.push_back(make_pair(s[i],1));
            }
        }
    }
    int ressize=res.size();
    if(ressize==0)
        cout<<"CLEAR!";
    else{
        for(int i=0;i<ressize;i++){
            cout<<res[i].first;
        }   
    }
    
 
}