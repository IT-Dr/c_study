//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main2016(){
    int n,t,min,m;

    while(cin>>n){
        if(n==0){   //输入0 就不操作
            continue;

        }
        vector<int> vt;
        for (int i = 0; i <n ; ++i) {   //记录n个元素
            cin>>t;
            vt.push_back(t);
        }
        min=vt[0];
        m=0;
        for (int i = 0; i < n; ++i) {  //找到最小元素的位置
            if(vt[i]<min){
                min=vt[i];
                m=i;
            }
        }
        swap(vt[0],vt[m]);    //交换
        for (int i = 0; i < n; ++i) {  //依次输出元素
            cout<<vt[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}