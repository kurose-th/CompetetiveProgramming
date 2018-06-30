#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// D - Practical Skill Test
int main(){
    int H, W, D;
    cin >> H >> W >> D;

    int Ax[90001];
    int Ay[90001];
    rep(i, 0, H){
        rep(j, 0, W){
            int a;
            cin >> a;
            Ax[a] = i;
            Ay[a] = j;
        }
    }
/*
    int remainder = D-1;
    vector<vector<int>> power(D, H*W/D+1);
    rep(i, 0, remainder){
        int num = remainder;
        while(num<H*W+D){
            power[i][num] = abs(Ay[num+D]-Ay[num]) + abs(Ax[num+D]-Ax[num]);
            num += D;
        }
    }
*/


    int ans = 0;
    cout << ans << endl;
    return 0;
}


