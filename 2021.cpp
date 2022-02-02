//
// Created by 周炳钦 on 2022/1/27.
//

#include <iostream>
using namespace std;
int main2021(){
    int n,salary;
    int sum;
    while (cin>>n,n){
        sum=0;
        for (int i = 0; i < n; ++i) {
            cin>>salary;
            sum+=salary/100;    //需要100元的张数
            salary%=100;
            sum+=salary/50;     //需要50元的张数
            salary%=50;
            sum+=salary/10;     //需要10元的张数
            salary%=10;
            sum+=salary/5;      //需要5元的张数
            salary%=5;
            sum+=salary/2;      //需要2元的张数
            salary%=2;
            sum+=salary;        //需要1元的张数
        }
        cout<<sum<<endl;
    }
    return 0;
}