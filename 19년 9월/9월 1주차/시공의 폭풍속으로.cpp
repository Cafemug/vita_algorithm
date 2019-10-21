#include <iostream>
using namespace std;
int arr[88];
int main(){
    int count=0;
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        if(!arr[temp])
            count++;
    }
    cout<<count;
}