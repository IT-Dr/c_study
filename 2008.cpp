//
// Created by 周炳钦 on 2022/1/25.
//

#include <iostream>
using namespace std;
int main2008(){
    int a,b,c,n;
    double temp;
    while(cin>>n){
        if (n==0){     //输入0时，不做任何操作
            continue;
        }
        a=0,b=0,c=0;
        for(int i =0;i<n;i++){
            cin>>temp;
            if(temp<0){     //负数
                a++;
            }
            else if(temp>0){  // 正数
                c++;
            }
            else{          // 0
                b++;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}