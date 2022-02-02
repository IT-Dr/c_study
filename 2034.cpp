//
// Created by 周炳钦 on 2022/1/30.
//

#include <iostream>
#include <set>
using namespace std;
int main2034(){
    int n,m,t;
    set<int> s1,s2;
    while (cin>>n>>m, n||m){
        for (int i = 0; i < n; ++i) {  //s1插入元素
            cin>>t;
            s1.insert(t);
        }
        for (int i = 0; i < m; ++i) { //s2插入元素
            cin>>t;
            s2.insert(t);
            if(s1.find(t)!=s1.end()){   //s2的元素若在s1中存在则在s1中删除
                s1.erase(t);
            }
        }
        if(s1.size()){   //s1-s2不为空集
            for(auto it =s1.begin();it!=s1.end();it++)
                cout<<(*it)<<' ';
        }
        else{
            cout<<"NULL"; //s1-s2为空集
        }


        cout<<endl;
    }

}