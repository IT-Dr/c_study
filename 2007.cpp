//
// Created by 周炳钦 on 2022/1/25.
//

#include <iostream>
#include <cmath>
using namespace std;
int main2007(){
    int st,end,eresult,oresult;
    while(cin>>st>>end){
        eresult=0;
        oresult=0;
        for(int i=st;i<=end;i++){
            if(i%2==0){    // 偶数
                eresult+=pow(i,2);
            }
            else{          // 奇数
                oresult+=pow(i,3);
            }
        }
        cout<<eresult<<" "<<oresult<<endl;
    }
    return 0;
}