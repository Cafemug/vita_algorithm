#include <iostream>
#include <cstdlib>
using namespace std;
long long temp[200003]={0,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int numa, numb;
    cin>>numa>>numb;
    for(int i=1;i<=numa;i++){
        string tmp;
        cin>>tmp;
        int len = tmp.size();
        char maths = tmp[0];
        string numbers = tmp.substr(1,len-1);
        long long item = atoi(numbers.c_str());
        if(maths=='+')
            temp[i]=temp[i-1]+item;
        else
            temp[i]=temp[i-1]-item;
    }
    for(int i=1;i<=numb;i++){
        int start,end;
        cin>>start>>end;
        long long res= temp[end]-temp[start-1];
        if(res>0)
            cout<<"+"<<res<<"\n";
        else
            cout<<res<<"\n";

    }
}