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

// D - Patisserie ABC
ll N, M;
ll a[1010][3];
ll ans = -500000;

int main(){
    cin >> N >> M;
    rep(i, 0, N){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    ll L = 3;
    // 2^L - 1回の全探索
    for(ll i=0;i<1<<L;++i){
        vector<ll> sum;
        ll r;
        rep(j, 0, N){
            ll tmpsum=0;
            for(r=0;r<L;++r){
                ll tmp=1;
                if((i & (1 << r)) != 0){
                    tmp=-1;
                }
                tmpsum += a[j][r]*tmp;
            }
            sum.push_back(tmpsum);
        }
        sort(all(sum), greater<ll>());
        ll tmpans = 0;
        rep(k, 0, M){
            tmpans += sum[k];
        }
        ans = max(ans, tmpans);
    }

    cout << ans << endl;
    return 0;
}


