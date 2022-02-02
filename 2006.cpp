//
// Created by 周炳钦 on 2022/1/25.
//

#include <iostream>

using namespace std;
int main2006(){
    int n,temp,result;
    while(cin>>n){
        result=1;
        for(int i =0;i<n;i++){
            cin>>temp;
            if(temp%2!=0){     //是否为奇数
                result*=temp;
            }
        }
        cout<< result<<endl;
    }
    return 0;
}