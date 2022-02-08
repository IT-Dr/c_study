//
// Created by 周炳钦 on 2022/2/7.
//
#include <iostream>
using namespace std;
/*int main(){   数组实现动态规划
    int n;
    int i,j;
    cin>>n;
    int d[50]={1,1,2};
    for(i=3;i<50;i++){
        d[i]=d[i-1]+d[i-2];  //动态规划 数组实现
    }
    while(n--){
        cin>>i>>j;
        if(i<j){
            cout<<d[j-i]<<endl;  // 数组从下标从0开始所以为j-i
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}*/

// 递归实现动态规划
int f(int n){
    if (n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else if(n==3){
        return 2;
    }
    else {
        return f(n-1)+f(n-2);
    }

}
int main2044(){
    int n;
    int i,j;
    cin>>n;
    while(n--){
        cin>>i>>j;
        if(i<j){
            cout<<f(j-i+1)<<endl;  // 末尾-开头+1得到相对长度
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;

}