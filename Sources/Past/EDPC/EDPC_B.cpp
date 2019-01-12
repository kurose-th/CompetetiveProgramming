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

// B - Frog 2
ll N, K;
ll ans = 0;
ll dp[105000];
ll h[105000];

int main(){
    cin >> N >> K;
    rep(i, 1, N+1){
        cin >> h[i];
    }
    rep(i, 0, 105000){
        dp[i] = 1000000000000;
    }
    dp[1] = 0;
    rep(i, 1, N+1){
        rep(j, 1, K+1){
            ll tmp = dp[i] + abs(h[i] - h[i + j]);
            dp[i + j] = min(dp[i + j], tmp);
        }
    }

    cout << dp[N] << endl;
    return 0;
}


