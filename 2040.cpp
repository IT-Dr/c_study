//
// Created by 周炳钦 on 2022/2/2.
//

#include <iostream>
#include <cmath>
using namespace std;
int sum(int a){
    int res=1;
    for (int i = 2; i <=sqrt(a) ; ++i) {
            if(a%i==0){
                if(i!= sqrt(a)){

                    res=res+i+a/i;
                }
                else{
                    res=res+i;
                }
             }
    }
    return res;
}
int main2040(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(sum(a)==b && sum(b)==a){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}