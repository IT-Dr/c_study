//
// Created by 周炳钦 on 2022/1/25.
//

#include <iostream>
#include <cmath>
using namespace std;
int main2009(){
    int m;
    double sum,temp,n;
    while(cin>>n>>m){
        sum=0.0;
        temp=n;
        for(int i =0;i<m;i++){
            sum+=temp;
            temp= sqrt(temp);

        }
        printf("%.2lf\n",sum);
    }
    return 0;
}