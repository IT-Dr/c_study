//
// Created by 周炳钦 on 2022/2/8.
//

#include <iostream>
using namespace std;
//数学问题：分割平面的几种类型：
//1、直线型：a[n]=(n*n+n+2)/2；
//2、平行线型：f(n)=2*n^2+1;
//3、折线形：f(n)=2*n^2-n+1;
//4、Z字型： f [n] = f [n-1]+9* (n-1) +1
int main2050(){
    int n,i;
    cin>>i;
    while(i--){
        cin>>n;
        cout<<(2*n*n-n+1)<<endl;
    }
    return 0;
}