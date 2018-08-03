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

// D - Katana Thrower
ll N, H;
vector<ll> a, b;
ll ans = 0;

int main(){
    cin >> N >> H;
    
    rep(i, 0, N){
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
        cin >> tmp;
        b.push_back(tmp);
    }

    sort(all(a), greater<ll>());
    sort(all(b), greater<ll>());
    rep(i, 0, N){
        if(a[0] < b[i]){
            H -= b[i];
            ++ans;
            if(H<=0){
                cout << ans << endl;
                return 0;
            }
        }
    }

    ans += (H+a[0]-1)/a[0];

    cout << ans << endl;
    return 0;
}


