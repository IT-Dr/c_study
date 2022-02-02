//
// Created by 周炳钦 on 2022/1/26.
//

#include <iostream>

using namespace std;
int main2014(){
    int n;
    double max,min;
    double sum,t;
    while(cin>>n){
        cin>>t;
        sum=t,max=min=t;
        for (int i = 1; i < n; ++i) {
            cin>>t;
            if(t>max){
                max=t;
            }
            if(t<min){
                min=t;
            }
            sum+=t;

        }
        printf("%.2lf\n",(sum-min-max)/(n-2));
    }
}