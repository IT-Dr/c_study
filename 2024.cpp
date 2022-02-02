//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>
#include <cctype>
using namespace std;
int main2024(){
    int n;
    char s[50];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        getchar();  //使gets能正常运行
        gets(s);
        if(s[0]!='_' && !isalpha(s[0])){  //首字符不是_或字母，则不合法
            puts("no");
            continue;
        }
        int flag=1;
        for (int j = 1; s[j]; ++j) {
            if(!isalnum(s[j]) && s[j]!='_'){   //其余字符不是字母或数字或下划线，则不合法
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}