//
// Created by 周炳钦 on 2022/1/29.
//

#include <iostream>
using namespace std;
void conversion(int n ,int r); //实现进制转换
int main2031(){
    int n,r;
    while(cin>>n>>r){
        if(n>0){
            conversion(n,r);
        }
        else if(n==0){
            cout<<'0';
        }
        else{
            cout<<'-';
            conversion(-n,r);
        }
        cout<<endl;
    }
    return 0;
}
void conversion(int n ,int r){
    if(n){
        conversion(n/r,r);  //采用递归的方式，函数返回时逆序输出余数，实现进制转换
        printf("%c",n%r>9? n%r -10+'A':n%r+'0');
    }
}