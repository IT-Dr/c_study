//
// Created by 周炳钦 on 2022/2/2.
//

#include <iostream>
using namespace std;
int way(int a){
    int res;
    if(a==1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    if(a==3){
        return 2;
    }
    else{
        return way(a-1)+way(a-2);
    }
}
int main2041(){
    int n;
    int floor;
    cin>>n;
    while(n--){
        cin>>floor;
        cout<<way(floor)<<endl;
    }
    return 0;
}