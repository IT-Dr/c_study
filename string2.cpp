//
// Created by 周炳钦 on 2022/1/23.
//

#include <iostream>
#include <string>
using namespace std;
int main02(){
    string d;   // D
    int n,j;      //n为第几个数，j为需要统计数字的位置
    cin >>d >>n;
    for(int sh=1;sh<n;sh++){   //第几个数字需要循环几次
        string temp="";        //暂时存储字符
        for(int i=0;i<d.length();i=j){   //d[i]表示字符，j-i 表示该字符的数量
            for(j=i;j<d.length() && d[j]==d[i];j++); //d[j]!=d[i]时，j的位置作为下一次i的位置
            temp=temp+ d[i]+ to_string(j-i);   // 通过to_string 将个数j-i转变为字符串
        }
        d=temp;
    }
    cout << d;
    return 0;
}