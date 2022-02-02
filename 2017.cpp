//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main2017(){
    int n;
    cin>>n;

    for (int i = 0; i < n; ++i) {
        int m=0;
        string s;
        cin>>s;
        for (int j = 0; j < s.size(); ++j) {
            if(isdigit(s[j])){
                m++;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}