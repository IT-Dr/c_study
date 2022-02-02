//
// Created by 周炳钦 on 2022/1/27.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main2022 (){
    int n,m;
    int score,ms;
    int r,c;
    while(cin>>n>>m){
        ms=r=c=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>score;
                if(abs(score)>abs(ms)){
                    ms=score;   //绝对值最大的分数
                    r=i;        //行
                    c=j;        //列
                }
            }
        }
        cout<<r+1<<" "<<c+1<<ms<<endl;
    }
    return 0;
}