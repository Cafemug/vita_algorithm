
#include <iostream>
using namespace std;
int main() {
    int n,m,d;
    cin>>n>>m>>d;
    for(int i=0;i<d;i++){
        if(i%2){
            int tempm=m/2;
            if(m%2==1)
                tempm++;
            n+=tempm;
            m-=tempm;
        }            
        else{
            int tempn=n/2;
            if(n%2==1)
                tempn++;
            n-=tempn;
            m+=tempn;
        }
    }
    cout<<n<<" "<<m;
}