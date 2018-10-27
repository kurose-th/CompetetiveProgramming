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

// C - 123引き算
int N;
int NG1, NG2, NG3;
string ans = "";
int dp[330];

int main(){
    cin >> N >> NG1 >> NG2 >> NG3;

    rep(i, 0, 330){
        dp[i] = 1000;
    }
    dp[N] = 0;

    per(i, 0, N+1){
        if(i==NG1||i==NG2||i==NG3) continue;
        repeq(j, 1, 3){
            dp[i-j] = min(dp[i-j], dp[i]+1);
        }
    }

    ans = (dp[0]<=100)? "YES":"NO";

    cout << ans << endl;
    return 0;
}


