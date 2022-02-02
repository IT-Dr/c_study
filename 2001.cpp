//
// Created by 周炳钦 on 2022/1/25.
//
#include <iostream>
#include <cmath>
using namespace std;
int main2001(){
    double x[2],y[2];
    while(cin>>x[0]>>y[0]>>x[1]>>y[1]){
        double dis;
        dis= sqrt(((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1])));
        printf("%.2f",dis);
    }
    return 0;
}