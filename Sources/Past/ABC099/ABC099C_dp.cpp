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
// 貰うDP
int N;
int ans = 200000;
int dp[101000];
const int upb = 200000;

int main(){
    cin >> N;
    dp[0] = 0;
    rep(i, 1, N+1){
        dp[i] = upb;
        rep(j, 0, 7){
            int tmp = i-(int)pow(6,j);
            if(tmp>=0){
                dp[i] = min(dp[i], dp[tmp]+1);
            }
        }
        rep(j, 0, 7){
            int tmp = i-(int)pow(9,j);
            if(tmp>=0){
                dp[i] = min(dp[i], dp[tmp]+1);
            }
        }
    }
    ans = dp[N];
    cout << ans << endl;
    return 0;
}


