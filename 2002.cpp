//
// Created by 周炳钦 on 2022/1/25.
//
#include <iostream>
#include <cmath>
#define PI 3.1415926
using namespace std;

int main2002(){
    double r ;   //半径
    while(cin>>r){
        printf("%.3f",(PI*pow(r,3)*4/3));
    }
    return 0;
}
