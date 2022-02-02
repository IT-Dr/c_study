//
// Created by 周炳钦 on 2022/1/25.
//
#include <iostream>
using namespace std;
int main2004(){
    double score;
    while(cin>>score){
        if(score<0 || score>100){
            cout<<"score is error!";
        }
        else if(score>=90 && score<=100){
            cout<<"A"<<endl;
        }
        else if(score>=80 && score<90){
            cout<<"B"<<endl;
        }
        else if(score>=70 && score<80){
            cout<<"C"<<endl;
        }
        else if(score>=60 && score<70){
            cout<<"D"<<endl;
        }
        else{
            cout<<"E"<<endl;
        }
    }
    return 0;
}