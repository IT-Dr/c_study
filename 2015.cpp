//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
using namespace std;
int main2015(){
    int n,m;
    double sum,ave;
    while(cin>>n>>m){
        sum=0;
        int k=0;
        for (int i = 1; i <= n; ++i) {
            sum+=i*2;
            k++;
            if(k%m==0){      // 每m个数求平均值
                ave=sum/m;
                sum=0;
                cout<<ave<<" ";
            }
        }
        if(k%m!=0){         //不足m个，以实际数量求平均值
            ave=sum/(k%m);
            cout<<ave;
        }
        cout<<endl;
    }
}