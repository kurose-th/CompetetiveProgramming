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
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define repeq(i, a, n) for (int i = a; i <= n; ++i)
#define repi(m, itr) for (auto itr = m.begin(); itr != m.end(); ++itr)
#define per(i, a, n) for (int i = n - 1; i >= a; --i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

ll mod = 1000000007;

// 繰り返し二乗法（MOD）
template <typename T>
T DoublingPow(T a, T p)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        T half_p = p / 2;
        T half = DoublingPow(a, half_p);
        return half * half % mod;
    }
    else
    {
        return a * DoublingPow(a, p - 1) % mod;
    }
}

// 素因数分解
// map<素因数, 乗数>
template <typename T>
map<T, T> PrimeFactorize(T n){

    map<T, T> primelist;
    T nrest = n;

    for (T i = 2; i * i <= nrest;++i){
        if(nrest %i == 0){
            T cnt = 0;
            // 同じ素因数で割り切れるだけ割り続ける（最低でも一度は割り切れる）
            while(nrest %i == 0){
                ++cnt;
                nrest /= i;
            }
            primelist[i] += cnt;
        }
    }
    if(nrest != 1){
        primelist[nrest] += 1;
    }
    return primelist;
}


//(10*9*8)/(3*2*1);
//10*9*8 -> ansMul
//3*2*1 -> ansDiv
ll calcComb(ll a, ll b) {
	if (b > a - b) return calcComb(a, a - b);
 
	ll ansMul = 1;
	ll ansDiv = 1;
	for (ll i = 0; i < b; i++)
	{
		ansMul *= (a - i);
		ansDiv *= (i + 1);
		ansMul %= mod;
		ansDiv %= mod;
	}
	//ansMul / ansDivをやりたい
	//ansDivの逆元を使って求めよう！
    ll result = ansMul * DoublingPow(ansDiv, mod - 2) % mod;
    return result;
}
 

//
ll N, M;
ll ans = 1;
int main()
{
    cin >> N >> M;

    map<ll, ll> mp = PrimeFactorize(M);
    repi(mp, itr){
        ans *= calcComb(N + itr->second - 1, N - 1);
        ans %= mod;
    }

    cout << ans << endl;
    return 0;
}
