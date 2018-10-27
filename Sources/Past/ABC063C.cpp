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

// C - Bugged
int N;
int s[110];
bool dp[10100][110];
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> s[i];
    }
    rep(i, 0, 10010){
        rep(j, 0, 110){
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    rep(i, 0, N){
        rep(j, 0, 10001){
            if(dp[j][i]){
                dp[j][i+1] = true;
                dp[j+s[i]][i+1] = true;
            }
        }
    }

    per(i, 0, 10001){
        if(i%10!=0 && dp[i][N]){
            ans = max(ans, i);
        }
    }

    cout << ans << endl;
    return 0;
}


