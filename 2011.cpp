//
// Created by 周炳钦 on 2022/1/26.
//
#include <iostream>
using namespace std;
int main2011(){
    int m,n,k;
    double sum,t;
    cin>>m;
    for (int i = 0; i < m; ++i) {    // 测试m个实例
        cin>>n;
        sum=0;
        k=0;
        for(int j=1;j<=n;j++){    //前n项和相加
            k++;   // 分母
            if(j%2==0){   //偶数项为负
                t=-1.0/k;
            }
            else{
                t=1.0/k;    // 奇数项为正
            }
            sum+=t;
        }
        printf("%.2lf\n",sum);
    }
}
