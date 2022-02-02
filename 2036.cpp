//
// Created by 周炳钦 on 2022/2/1.
//

#include <iostream>
using namespace std;
//利用多边形（n边形）面积计算公式：S=0.5 * ( (x0*y1-x1*y0) + (x1*y2-x2*y1) + ... + (xn*y0-x0*yn) )，
//其中点(x0，y0), (x1， y1), ... , (xn,，yn)为多边形上按逆时针顺序的顶点（（x0，y0）与（xn，yn）为同一点）。
int main2036(){
    int n;
    int x[3],y[3];
    double sum;
    while(cin>>n,n){
        cin>>x[1]>>y[1];
        x[0]=x[1];   //第一个点
        y[0]=x[1];
        sum=0;
        for (int i = 0; i < n-1; ++i) {
            cin>>x[2]>>y[2];
            sum+=(x[1]*y[2]-x[2]*y[1]);
            x[1]=x[2];
            y[1]=y[2];
        }
        sum+=(x[1]*y[0]-x[0]*y[1]);    //(x0，y0）与（xn，yn）
        printf("%.1lf",sum/2.0);
    }
    return 0;
}