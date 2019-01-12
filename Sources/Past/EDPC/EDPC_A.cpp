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

// A - Frog 1
int N;
int ans = 0;
int dp[100010];
int h[100010];

int main(){
    cin >> N;
    rep(i, 1, N+1){
        cin >> h[i];
    }
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);
    rep(i, 1, N+1){
        dp[i + 2] = min(dp[i] + abs(h[i] - h[i + 2]), dp[i + 1] + abs(h[i+2] - h[i + 1]));
    }

    cout << dp[N] << endl;
    return 0;
}


