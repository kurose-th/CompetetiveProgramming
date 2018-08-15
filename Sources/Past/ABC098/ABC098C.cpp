#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// C - Attention
int main(){
    int N;
    string S;

    cin >> N >> S;

    vector<int> west;
    vector<int> east;

    if(S[0] == 'W'){
        west.push_back(1);
        east.push_back(0);
    }else{
        east.push_back(1);
        west.push_back(0);
    }

    for(int i=1;i<N;++i){        
        if(S[i] == 'W'){
            west.push_back(west.at(i-1) + 1);
            east.push_back(east.at(i-1));
        }else{
            east.push_back(east.at(i-1) + 1);
            west.push_back(west.at(i-1));
        }
    }

    int ans= 0 + (east.at(N-1) - east.at(0));

    for(int i=1;i<N;++i){
        int tmp_ans = 0;
        tmp_ans = west.at(i-1) + (east.at(N-1) - east.at(i));
        if(tmp_ans < ans){
            ans = tmp_ans;
        }
    }

    cout << ans << endl;
    return 0;
}


