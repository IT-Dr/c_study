//
// Created by 周炳钦 on 2022/2/7.
//

#include <iostream>
using namespace std;
int main2042(){
    int n;
    int a;
    cin>>n;
    while(n--){
        cin>>a;
        int sum=3;
        for (int i = 0; i < a; ++i) {
            sum=(sum-1)*2;
        }
        cout<<sum<<endl;
    }
    return 0;
}