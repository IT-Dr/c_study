//
// Created by 周炳钦 on 2022/2/2.
//
#include <iostream>

using namespace  std;
int main2039(){
    int n;
    int a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if((a+b>c)&&(a+c>b)&&(c+b>a)){  //任意两边之和小于第三 边
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
