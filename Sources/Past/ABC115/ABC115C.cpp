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

// 
ll N;
ll K;
ll h[101000];
ll s[101000];
ll ans = 5000000000;

int main(){
    cin >> N >> K;
    rep(i, 0, N){
        cin >> h[i];
    }
    sort(h, h+N);
    rep(i, 0, N-K+1){
        ans = min(ans, h[i+K-1] - h[i]);
    }


    cout << ans << endl;
    return 0;
}


