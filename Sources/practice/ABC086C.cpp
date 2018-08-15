#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// ABC086C - Traveling
int main(){
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;

    t[0] = x[0] = y[0] = 0;
    for(int i=0;i<N;++i){
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }

    bool sw = true;
    for(int i=0;i<N;++i){
        int dt = t[i+1]-t[i];
        int deltadist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        if(deltadist>dt){
            sw = false;
        }
        if(deltadist%2 != dt%2){
            sw = false;
        }

    }
    string ans = sw?"Yes":"No";
    cout << ans << endl;
    return 0;
}