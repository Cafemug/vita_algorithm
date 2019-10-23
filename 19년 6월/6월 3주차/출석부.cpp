#include <iostream>
using namespace std;
int main(){
    int flag=0;
    string s;
    cin>>s;
    int len = s.size();
    for(int i=0;i<len-1;i++){
        if(s[i]<=s[i+1])
            cout<<s[i];
        else if(s[i]>s[i+1]&&flag)
            cout<<s[i];
        else
            flag=1;
        
    }
    if(flag)
        cout<<s[len-1];
}