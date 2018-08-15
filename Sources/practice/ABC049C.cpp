#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// ABC049C - 白昼夢 / Daydream
int main(){
    string S;
    string divstr[4] = {"dream", "dreamer", "erase", "eraser"};
    cin >> S;

    reverse(S.begin(), S.end());
    for(int i=0;i<4;++i){
        reverse(divstr[i].begin(), divstr[i].end());
    }
    bool sw = true;
    for(int i=0;i<S.size();){
        bool sw2 = false;
        for(int j=0;j<4;++j){
            string d = divstr[j];
            if(S.substr(i, d.size()) == d){
                sw2 = true;
                i+= d.size();
            }
        }
        if(!sw2){
            sw = false;
            break;
        }
    }

    string ans = (sw?"YES":"NO");
    printf("%s\n", ans.c_str());
    return 0;
}