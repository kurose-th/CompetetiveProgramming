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

    vector<ll> divisor(ll n){
        vector<ll> divise;

        rep(i, 1, (ll)sqrt(n)+1){
            if(n%i == 0){
                divise.push_back(i);
                divise.push_back(n / i);
            }
        }
        return divise;
    }

    // D - Partition
    ll N, M;
    ll ans = 1;

    int main(){
        cin >> N >> M;

        ll tmp = M / N;

        vector<ll> divi = divisor(M);
        repi(divi, itr){
            if(tmp >= *itr){
                ans = max(ans, *itr);
            }
        }
        
        cout << ans << endl;
        return 0;
    }


