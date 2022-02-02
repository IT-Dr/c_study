//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>
#include <cctype>
using namespace std;
int main2026(){
    char s[100]={' '};
    while(gets(s+1)){
        for(int i=1;s[i];i++){
            if(isalpha(s[i]) && s[i-1]==' '){
                s[i]=s[i]-32;
            }
            putchar(s[i]);
        }
        putchar('\n');
    }
    return 0;
}