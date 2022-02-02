//
// Created by 周炳钦 on 2022/2/1.
//

#include <iostream>
using namespace std;
//取模定理： (a*b)%1000 == ((a%1000) * (b%1000)) % 1000  用来防止溢出
int main2035(){
    int a, b,temp, i;
    while(cin>>a>>b,a||b){  //输入 两个0 停止
        temp = 1;
        for(i = 0; i < b; i++){
            temp = ((a % 1000) * (temp % 1000)) % 1000;	  //防止溢出	同时取后三位
        }
        printf("%d\n", temp);
    }
    return 0;
}