//
// Created by 周炳钦 on 2022/1/27.
//
#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a,int b){
    return abs(a)>abs(b);   // 绝对值大的排在前面
}
int main2020(){
    int n;
    int x[101];
    while(cin>>n,n){ // 输入0则输入结束
        int t;
        for (int i = 0; i < n; ++i) {   //接受数列
            cin>>t;
            x[i]=t;
        }
        sort(x,x+n,cmp);    //根据cmp函数来排序
        for (int i = 0; i <n; ++i) {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
