//
// Created by 周炳钦 on 2022/1/23.
//
#include<iostream>
#include<algorithm>
using namespace std;
int main20() {
    char n[3];
    while(cin >>n){
        if(n[0]<n[1]) swap(n[0],n[1]);
        if(n[1]<n[2]) swap(n[1],n[2]);
        if(n[0]<n[1]) swap(n[0],n[1]);
        cout<<n[1]<<" "<<n[2]<<" "<<n[0];
    }


}













