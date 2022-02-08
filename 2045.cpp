//
// Created by 周炳钦 on 2022/2/7.
//

#include <iostream>
//在n-1的基础上，要与首部颜色不同，且与前一格颜色不同，所以n只有f（n-1）种情况，在n-2的基础上，n-1选择与首部颜色相同，n就有f（n-2）*2种可能
using namespace std;
int main2045(){
    int n;
    long long d[51]={0,3,6,6};
    for (int i = 4  ; i <51 ; ++i) {
        d[i]=d[i-1]+d[i-2]*2;
    }
    while(cin>>n){
        cout<<d[n]<<endl;
    }
    return 0;
}