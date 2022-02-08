//
// Created by 周炳钦 on 2022/2/8.
//

#include <iostream>
using namespace std;
int main2046(){
    int n;
    long long d[51]={0,1,2,};
    for (int i = 3; i < 51; ++i) {
        d[i]=d[i-1]+d[i-2];
    }
    while(cin>>n){
        cout<<d[n]<<endl;
    }
    return 0;
}