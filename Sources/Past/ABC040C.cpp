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

// C - 柱柱柱柱柱
int N;
int a[101000];
int dp[101000];
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);

    repeq(i, 2, N){
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }

    cout << dp[N-1] << endl;
    return 0;
}


