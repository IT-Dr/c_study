//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
#include <cmath>
using namespace std;
int is_prime(int n);   // 判断是否是素数
int main2012(){
    int x,y,number;
    int n;
    while(cin>>x>>y){
        if(x==0 && y==0){      //输入0 0 就不操作
            continue;
        }
        number=0;
        for(int i =x;i<=y;i++){
            n=pow(i,2)+i+41;
            if(is_prime(n)){
                number++;    // 记录素数的个数
            }
        }
        if(number==(y-x+1)){
            cout<<"ok"<<endl;
        }
        else{
            cout<<"sorry"<<endl;
        }
    }
}
int is_prime(int n){
    double k= sqrt(n);
    for (int i = 2; i < k; i++) {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}