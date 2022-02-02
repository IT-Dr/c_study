//
// Created by 周炳钦 on 2022/1/30.
//

#include <iostream>
using namespace std;
int main2033(){
    int time[6];
    int n;
    cin>>n;
    while(n--){
        for (int i = 0; i < 6; ++i) {
            cin>>time[i];
        }
        time[1]+=(time[2]+time[5])/60;
        time[2]=(time[2]+time[5])%60;  //time[2] 总的秒钟数
        time[0]+=(time[1]+time[4])/60;
        time[1]=(time[1]+time[4])%60;  //time[1] 总的分钟数
        time[0]+=time[3];  //time[0] 总的时钟数
        for (int i = 0; i < 3; ++i) {
            cout<<time[i]<<' ';
        }
        cout<<endl;

    }
}