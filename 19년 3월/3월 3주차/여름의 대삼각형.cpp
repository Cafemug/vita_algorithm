#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    int arrx[3],arry[3];
    for(int i=0;i<3;i++){
        cin>>arrx[i]>>arry[i];
    }
    int ax=(arrx[0]*arry[1]+arrx[1]*arry[2]+arrx[2]*arry[0]);
    int ay=(arrx[0]*arry[2]+arrx[2]*arry[1]+arrx[1]*arry[0]);
    double res = (double)abs(ax-ay)/2;
    printf("%.2f",res);
}