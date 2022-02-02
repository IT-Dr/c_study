//
// Created by 周炳钦 on 2022/1/28.
//
#include <iostream>
#include <cstring>
using namespace std;
int main2030(){
    int n;
    int count;
    char c;
    cin>>n;
    while(n--){
        count=0;
        getchar();
        while((c=getchar())!='\n'){
            if(c<0){
                count++;
            }
        }
        cout<<count/2<<endl;
    }
    return 0;
}
