#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <tuple>
#include <queue>
#include <numeric>
using namespace std;
typedef long long ll;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


// D - Knapsack 1
ll N, W;
ll w[110];
ll v[110];
ll ans = 0;
ll dp[110][120000];

int main(){
    cin >> N >> W;
    rep(i, 0, N){
        cin >> w[i] >> v[i];
    }

    dp[0][0] = 0;
    rep(i, 0, N){
        repeq(j, 0, W){
            if(j>=w[i]){
                chmax(dp[i+1][j], dp[i][j-w[i]] + v[i]);
            }
            chmax(dp[i+1][j], dp[i][j]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}


