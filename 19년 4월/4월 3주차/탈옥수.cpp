#include <iostream>
using namespace std;
double arr[101][2];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    double gi;
    cin>>num;
    cin>>arr[0][0]>>arr[0][1];
    cin>>arr[1][0]>>arr[1][1];
    for(int i=2;i<num;i++){
        cin>>arr[i][0]>>arr[i][1];
        gi=arr[i-1][1]/arr[i-1][0];
        cout<<gi<<" ";
        if(arr[i][1]<(gi*arr[i][0]))
            cout<<"RIGHT\n";
        else
            cout<<"LEFT\n";
        
    }
    
}