//
// Created by 周炳钦 on 2022/2/8.
//

#include <iostream>
// 1.若n为o时，n-1 则为 e f 所以n时的个数为f（n-2）*2,；2.若n不为o时，n为 e f ，所以n时的个数为f（n-1）*2；
using namespace std;
int main2047(){
    int n;
    long long d[41]={0,3,8};
    for (int i = 3; i < 41; ++i) {
        d[i]=2*(d[i-1]+d[i-2]);
    }
    while(cin>>n){
        cout<<d[n]<<endl;
    }
    return 0;
}