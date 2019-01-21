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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


// H - Grid 1
ll H, W;
vector<string> a;
const ll MOD = 1000000007;
ll dp[1100][1100];

void add(ll &a, ll b){
    a += b;
    if(a >= MOD){
        a -= MOD;
    }
}

int main(){
    cin >> H >> W;
    a.resize(H);
    rep(i, 0, H){
        cin >> a[i];
    }

    dp[0][0] = 1;
    rep(i, 0, H){
        rep(j, 0, W){
            if(i+1<H && a[i+1][j] == '.'){
                add(dp[i + 1][j], dp[i][j]);
            }
            if(j+1<W && a[i][j+1] == '.'){
                add(dp[i][j + 1], dp[i][j]);
            }
        }
    }



    cout << dp[H-1][W-1] << endl;
    return 0;
}


