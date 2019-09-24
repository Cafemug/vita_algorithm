#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string s) {
    int len=s.size();
    string b="067u85670p91023857189235719034681-0394019238491024i190284094656123151361445234";
    s+=b;
    
    int answer=len-1;
    for(int i=1;i<=len;i++){
        int res=1;
        string temp="";
        string ttemp="";
        int t=0;
        while(t<len){
            if(s[t]==s[t+i]){
                res+=1;
                ttemp+=s[t];
                t+=1;
            }
            else{
                if(res!=1) 
                    temp+=to_string(res);
                    ttemp=s.substr(t,i);
                cout<<ttemp<<"\n";
                temp+=ttemp;
                t+=i;
                ttemp="";
                res=1;
            
            }
        }
        
        cout<<temp<<"\n";
        int templen=temp.size();
        cout<<templen<<"\n";
        if(answer>templen)
            answer=templen;
    }
    cout<<answer<<"\n";
    return answer;
}

int main(){
    string sss;
    cin>>sss;
    solution(sss);
}