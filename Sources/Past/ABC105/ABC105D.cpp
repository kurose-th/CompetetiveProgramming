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

// D - Candy Distribution
ll N, M;
vector<ll> A;
map<ll, ll> X;
ll ans = 0;

int main(){
    cin >> N >> M;
    ll tmp;
    rep(i, 0, N){
        cin >> tmp;
        A.push_back(tmp);
    }

    ++X[0];
    ll sum=0;
    rep(i, 0, N){
        sum += A[i];
        ++X[sum%M];
    }

    repi(X, i){
        ans += i->second*(i->second -1)/2;
    }

    cout << ans << endl;
    return 0;
}


