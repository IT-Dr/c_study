//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
using namespace std;
int main2013(){
    int n;
    int t;
    while(cin>> n){
        t=1;
        for (int i = 0; i < n-1; ++i) {
            t=(t+1)*2;
        }
        cout<<t<<endl;
    }
}