//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>
#include <string>
using namespace std;
int main2025(){
    string s;
    while(cin>>s){
        char max=s[0];
        for (int i = 0; i < s.size(); ++i) {   //找到最大字母
            if(s[i]>max){
                max=s[i];
            }
        }
        for (int i = 0; i < s.size(); ++i) {   //输出
            cout<<s[i];
            if(max==s[i]){
                cout<<"(max)";
            }
        }
        cout<<endl;
    }
    return 0;
}