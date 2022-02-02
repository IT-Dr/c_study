//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>

using namespace std;
typedef unsigned int UI;
UI gcd(UI u,UI v);
UI lcm(UI u,UI v);
int main2028() {
    int n;
    UI u;
    UI res;
    while (cin >> n) {
        res = 1;
        while (n--) {
            cin >> u;
            res = lcm(res,u);
        }
        cout<<res<<endl;
    }
}
UI gcd(UI u,UI v){     //辗转相除法求最大公约数
    int remainder;
    remainder=u%v;
    while (remainder){
        u=v;
        v=remainder;
        remainder=u%v;
    }
    return v;
}
UI lcm(UI u,UI v){    //  最小公倍数等于两数乘积除以最大公约数
    return u*v/gcd(u,v);
}