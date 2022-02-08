//
// Created by 周炳钦 on 2022/2/8.
//

#include <iostream>
using namespace std;
// 错排（选错新娘）
//n个新郎选错相当于把n个元素放到不相应的位置
//1.把第n个元素放到除n以外的任意一个位置，有n-1种方法；
//2.假设放在k处，若把k对应的元素放在n处，则剩下n-2个元素有f（n-2）种方法，若把k对应的元素不放在n处，则剩下n-1个元素有f（n-1）种方法;
//3.重复n-1次；
//所以递推式为 （n-1）*（f（n-2）+f（n-1））
//4.从n个新郎中选出m个新郎选错

int main2049(){
    int c;
    int n,m;
    long long b[21]={0,0,1,2}; // 错排的可能数
    long long a[21]= {1, 1, 2, 6};// 全排列的个数
    for (int i = 4; i < 21; ++i) {
        b[i]=(i-1)*(b[i-1]+b[i-2]);
        a[i]=a[i-1]*i;
    }
    cin>>c;
    while(c--){
        cin>>n>>m;
        printf("%ld\n",b[m]*a[n]/(a[m]*a[n-m]));
    }
}