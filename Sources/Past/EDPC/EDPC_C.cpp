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

// C - Vacation
ll N;
ll ans = 0;
ll dp[105000][3];
ll a[105000], b[105000], c[105000];

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> a[i] >> b[i] >> c[i];
    }

    rep(i, 0, N+1){
        if(i==0){
            continue;
        }
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i-1];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i-1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i-1];
    }

    ans = max(max(dp[N][0], dp[N][1]), dp[N][2]);
    cout << ans << endl;
    return 0;
}


