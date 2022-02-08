//
// Created by 周炳钦 on 2022/2/7.
//

#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
int main2043(){
    int m;
    char c;
    int a[6];
    cin>>m;
    while(m--){
        fill(a,a+6,0);   //初始化数组
        getchar();
        while((c=getchar())!='\n'){
            a[5]++;  // 字符的个数
            if(isupper(c)){
                a[0]++;  //大写字母的个数
            }
            else if(islower(c)){
                a[1]++; // 小写字母的个数
            }
            else if(isdigit(c)){
                a[2]++; // 数字的个数
            }
            else
            {
                a[3]++;  // 其他字符 的个数
            }
        }
        if(a[0]) a[4]++;
        if(a[1]) a[4]++;
        if(a[2]) a[4]++;
        if(a[3]) a[4]++;
        if(a[4]>2 && a[5]<17 && a[5]>7){  //密码长度大于等于 8，且不要超过 16。  密码中的字符应该来自下面“字符类别”中四组中的至少三组
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}