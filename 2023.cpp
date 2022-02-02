//
// Created by 周炳钦 on 2022/1/27.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main2023(){
    int n,m,t,num;
    int i,j;
    int c[5];
    int s[50];
    int score[50][5];

    while(cin>>n>>m) {
        fill(c,c+5,0);    //初始化数组
        fill(s,s+50,0);
        fill(score[0],score[0]+50*5,0);
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> t;
                score[i][j] = t;
                c[j] += t;    //各学科分数总和
                s[i] += t;    //各学生分数总和
            }
        }
        for (i = 0; i < n; i++) {
            printf("%.2lf ", s[i] * 1.0 / m);   //输出各学生的平均分
        }
        cout<<endl;
        for (j = 0; j < m; j++) {
            printf("%.2lf ", c[j] * 1.0 / n);   //输出各课程的平均分
        }
        cout<<endl;
        num=0;
        for(i=0;i<n;i++){     //超过平均分的学生个数
            int flag=1;
            for(j=0;j<m;j++){
                if(score[i][j]<(c[j]*1.0/n)){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                num++;
            }
        }
        cout<<num<<endl;
    }

    return 0;
}