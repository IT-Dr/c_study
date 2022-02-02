//
// Created by 周炳钦 on 2022/1/23.
//

#include <iostream>
#include <string>
using namespace  std;
int main03(){
    string n;
    int sum=0;
    cin >>n;
    for(int i=0;i<n.length();i++){   //遍历得到每一位数字对应的字符，减去‘0’ 转化为相应的数字
        sum+=(n[i]-'0');   // 求和
    }
    string s= to_string(sum);   //将sum转化为字符串
    string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<< array[ s[0]-'0'];
    for(int i =1;i<s.length();i++){  //遍历得到每一位数字对应的字符，减去‘0’ 转化为相应的数字
        cout<<' '<< array[ s[i]-'0'];
    }
    return 0;
}