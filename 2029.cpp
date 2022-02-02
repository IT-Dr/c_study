//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>
#include <string>
using namespace std;
int main2029(){
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        int flag=1;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!=s[s.size()-i-1]){
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
    return  0;
}