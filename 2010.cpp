//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>
#include <cmath>
using namespace std;
int main2010(){
    int m,n;
    int b,s,g;    // 百位，十位，个位
    int flag;     // 标记是否有水仙花数
    while(cin>>m>>n){
        flag=0;
        for(int i =m;i<=n;i++){
            b=i/100;
            s=(i%100)/10;
            g=(i%100)%10;
            if((pow(b,3)+pow(s,3)+pow(g,3))==i){
                cout<<i<<" ";
                flag=1;
            }
        }
        if(flag==0){
            cout<<"no";
        }
        cout<<endl;
    }
}