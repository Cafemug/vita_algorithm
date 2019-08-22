#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
string temp[22];
vector<int> v[27];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin>>num;
    for (int i= 0; i<num ;i++){
        cin>>temp[i];
    }
    

    for (int i= 1; i<num ;i++){
        int len=temp[i].size();
        for(int t=0;t<len;t++){
            int temp_parent = temp[i-1][int(t/2)] - 'A' + 1;
            int temp_child = temp[i][t]- 'A' + 1;
            v[temp_parent].push_back(temp_child);
        }
    }

}