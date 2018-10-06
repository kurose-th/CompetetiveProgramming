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
ll n, L, a;
ll ans = 0;
ll t[100010], l[100010];

int main(){
    cin >> n >> L >> a;

    rep(i, 0, n){
        cin >> t[i+1] >> l[i+1];
    }
    t[0] = l[0] = 0;
    t[n+1] = L;

    rep(i, 0, n+1){
        ll tmp = t[i+1] - (l[i] + t[i]);
        ans += tmp/a;
    }

    cout << ans << endl;
    return 0;
}


