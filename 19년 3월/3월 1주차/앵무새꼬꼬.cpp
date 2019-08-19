#include <iostream>
#include <cstring>
using namespace std;
string sentence;
int num;
int count=0;
int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cin>>num;
  cin.ignore();
  while(num--){
    getline(cin,sentence);
    count=0;
    int len = sentence.size();
    for(int i = 0; i < len; i++){
      if(sentence[i] == 'i' || sentence[i] == 'a' || sentence[i] == 'u' || sentence[i] == 'e' || sentence[i] == 'o'){
        cout<<sentence[i];
        count++;
      }
      if(sentence[i] == 'I' || sentence[i] == 'A' || sentence[i] == 'U' || sentence[i] == 'E' || sentence[i] == 'O'){
        cout<<sentence[i];
        count++;
      }
    }
    if(!count)
      cout<<"???\n";
    else
      cout<<"\n";
    fill(sentence.begin(),sentence.end(),NULL);
  }
  
}