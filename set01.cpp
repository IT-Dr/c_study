//
// Created by 周炳钦 on 2022/1/2
#include <iostream>
#include <set>
#include <vector>
using  namespace  std;

int main01(){
    int n,m,m1,k,a,b;
    cin>> n;  //输入集合的个数
    vector<set<int>> v(n);   // 创建动态数组
    for(int i=0;i<n;i++){
        cin>>m;              // 输入每个集合元素的个数
        set<int> s;
        for(int j=0;j<m;j++){  // 输入每个集合的元素
            cin >>m1;
            s.insert(m1);
        }
        v[i]=s;
    }
    cin >> k;   //输入查询的次数
    for(int i=0;i<k;i++){
        cin >> a>>b; // 输入需要查询的两个集合
        int nc=0,nt=v[b-1].size();   // nc为公共元素的个数，nt两个集合不同元素的个数，初始值为b集合元素的个数
        for(auto it= v[a-1].begin();it!=v[a-1].end();it++){  // 遍历a的每个元素，在b中找，若在b中存在则nc+1，找不到则nt+1
            if(v[b-1].find(*it) ==v[b-1].end()){
                nt++;
            }
            else{
                nc++;
            }
        }
        double result;    //  相似度
        result = nc*1.0/nt *100;
        printf("%.1f\n",result);

    }
    return 0;
}