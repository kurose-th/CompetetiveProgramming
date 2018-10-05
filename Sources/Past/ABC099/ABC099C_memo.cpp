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

// C - Strange Bank
// メモ化再帰
int N;
int ans = 200000;
int memo[101000];
const int upb = 200000;

int solve(int n){
    int res = upb;
    if(n == 0) return 0;
    if(memo[n] != upb) return memo[n];

    rep(i, 0, 7){
        if(n >= (int)pow(6, i)){
            res = min(res, solve(n - pow(6, i)) + 1);
            memo[n] = res;
        }
    }
    rep(i, 0, 7){
        if(n >= (int)pow(9, i)){
            res = min(res, solve(n - pow(9, i)) + 1);
            memo[n] = res;
        }
    }
    return res;
}

int main(){
    cin >> N;
    rep(i, 0, 101000){
        memo[i] = upb;
    }
    ans = solve(N);
    cout << ans << endl;
    return 0;
}


