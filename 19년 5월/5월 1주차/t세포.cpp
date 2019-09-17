#include <iostream>
using namespace std;
int arr[1000];
int main(){
  int n,i=0,count=0,len;
  cin>>n;
  while(n>1){
    int namergi = n%2;
    if(namergi==1){
      arr[i]=count;
      i++;
    }    

    n/=2;
    count++;
  }
  cout<<i+1<<"\n";
  for(int t=0;t<i;t++){
    cout<<arr[t]<<" ";
  }
  cout<<count<<"\n";

}