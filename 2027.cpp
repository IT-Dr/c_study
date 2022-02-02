//
// Created by 周炳钦 on 2022/1/28.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main2027(){
    char s[100];
    int n;
    int y[5];
    cin>>n;
    while(n--){
        getchar();
        gets(s);
        fill(y,y+5,0);
        for (int i = 0; s[i]; ++i) {
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            if(s[i]=='a'){
                y[0]++;
            }
            if(s[i]=='e'){
                y[1]++;
            }
            if(s[i]=='i'){
                y[2]++;
            }
            if(s[i]=='o'){
                y[3]++;
            }
            if(s[i]=='u'){
                y[4]++;
            }
        }
        printf("a:%d\n",y[0]);
        printf("e:%d\n",y[1]);
        printf("i:%d\n",y[2]);
        printf("o:%d\n",y[3]);
        printf("u:%d\n",y[4]);
        if(n) printf("\n");
    }
    return 0;
}