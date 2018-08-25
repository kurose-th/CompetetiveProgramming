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
using namespace std;
typedef long long ll;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// 
ll N, K;
ll candle[101000];
ll cost[101000];
ll sum[101000];
ll ans = 200000000000000;

int main(){
    cin >> N >> K;
    rep(i, 0, N){
        cin >> candle[i];
        cost[i] = 200000000000000;
    }

    rep(i, 0, (N-K+1)){
            cost[i] = abs(candle[i]);
            cost[i] += abs(candle[i] - candle[i+K-1]);
    }
    for(int i=N-1;i>=N-(N-K+1);--i){
        ll tmp = abs(candle[i]);
        ll haji = i-K+1;
        tmp += abs(candle[i] - candle[haji]);
        cost[i] = min(tmp, cost[i]);
    }
    rep(i, 0, N){
        ans = min(ans, cost[i]);
    }
    cout << ans << endl;
    return 0;
}


