#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// B - Exponential
int main(){
    int X;
    cin >> X;
    
    vector<int> ans_vec = {1};
    for(int b=2;b<1000;++b){
        for(int p=2;p<1000;++p){
            if(pow(b, p)>X) break;
            ans_vec.push_back(pow(b, p));
        }
    }

    int ans = *max_element(ans_vec.begin(), ans_vec.end());
    cout << ans << endl;
    return 0;
}


