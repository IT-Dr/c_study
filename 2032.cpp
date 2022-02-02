//
// Created by 周炳钦 on 2022/1/30.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main2032(){
    int i,j,n;
    int yanghui[30];
    while(cin>>n){
        fill(yanghui,yanghui+30,0);
        yanghui[0]=1; //每行的第一个元素为1
        for (i = 0;  i<n; i++) {
            cout<<1;      //输出第一个元素1
            for(j=i;j;j--){  //每行其余元素的值，在上一行的基础上得到下一行的元素
                yanghui[j] +=yanghui[j-1];
            }
            for(j=1;j<=i;j++){  //每行从第二个元素开始输出
                cout<<yanghui[j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}