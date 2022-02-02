//
// Created by 周炳钦 on 2022/2/1.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct c{
    int x; // 节目开始时间
    int y; // 节目结束时间
    int ord; // 节目次序
}d[100];
bool cmp(c a,c b){    // 比较函数，实现从大到小
    if(a.x==b.x){
        return a.y>b.y;
    }
    else{
        return a.x>b.x;
    }

}
int main2037() {
    int n;
    int max;
    int t1,t2;
    while(cin>>n,n){ // 输入0 的时候停止
        for (int i = 0; i < n; ++i) {  // 初始化
            cin>>t1>>t2;
            d[i].x=t1;
            d[i].y=t2;
            d[i].ord=1;
        }
        max=0;
        sort(d,d+n,cmp); // 从大到小排列
        for (int i = 1; i<n ; ++i) {    //双指针遍历 获得第i个节目的最优次序（简单贪心）
            for (int j = i-1; j ; --j) {
                if(d[i].y<=d[j].x && d[i].ord <d[j].ord +1 ){
                    d[i].ord=d[j].ord+1;
                }
            }
            if(max<d[i].ord){
                max=d[i].ord;
            }
        }
        cout<<max;
    }
    return 0;
}
