//
// Created by 周炳钦 on 2022/1/27.
//

#include <iostream>
#include <vector>
using namespace std;
int main2019(){
    int n,m,i;
    vector<int> vt;
    while(cin>>n>>m,n||m){       //n,m同时为0时，结束输入
        int t;
        for (i = 0; i < n; ++i) {  //接受顺序数列
            cin>>t;
            vt.insert(vt.begin()+i,t);
        }
        for (i = n; i>0 &&vt[i-1]>m ; i--) {  //找到目标位置
            vt[i]=vt[i-1];
        }
        vt[i]=m;   //插入
        for (int j = 0; j <= n; ++j) {  //顺序输出
            cout<<vt[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}