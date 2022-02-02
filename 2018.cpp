//
// Created by 周炳钦 on 2022/1/27.
//

#include <iostream>
using namespace std;
int main2018(){
    int cow[55]={1,2,3,4,6};  // 举例可知，各年的数量为1,2,3,4,6,9,13......
    int n;
    for (int i = 5; i <55; ++i) {                 //从第五年开始，每年的数量等于去年的数量加上大前年的数量
        cow[i]=cow[i-1]+cow[i-3];
    }
    while(cin>>n,n){   //0表示输入的结束
        cout<<cow[n-1]<<endl;
    }
    return 0;
}