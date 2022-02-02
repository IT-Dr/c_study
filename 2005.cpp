//
// Created by 周炳钦 on 2022/1/25.
//

#include <iostream>
using namespace std;
int leap(int y);    // 判断是否为闰年
int main2005(){
    int y,m,d,sum;
    int month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
        sum=0;
        for(int i=0;i<m;i++){
            sum+=month[leap(y)][i];       //若为润年，leap（y）==1,
        }
        sum+=d;                           // 加上天数
        cout<<sum<<endl;
        }
    return 0;
}
int leap(int y){
    if((y%4==0 && y%100!=0) || y%400==0){
        return 1;
    }
    else{
        return 0;
    }
}