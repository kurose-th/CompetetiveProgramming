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


// E - Knapsack 2
ll N, W;
ll w[110];
ll v[110];
ll ans = 0;
const int MAX_N = 110;
const int MAX_V = 110000;
const ll INF = 10000000000000;
ll dp[MAX_N][MAX_V];

int main(){
    cin >> N >> W;
    rep(i, 0, N){
        cin >> w[i] >> v[i];
    }

    rep(i, 0, MAX_N){
        rep(j, 0, MAX_V){
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;
    rep(i, 0, N){
        repeq(j, 0, MAX_V){
            if(j>=v[i]){
                chmin(dp[i+1][j], dp[i][j-v[i]] + w[i]);
            }
            chmin(dp[i+1][j], dp[i][j]);
        }
    }

    rep(i, 0, MAX_V){
        if(dp[N][i] <= W){
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}


