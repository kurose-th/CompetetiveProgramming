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

// F - LCS
string S, T;
string ans = "";
int dp[3100][3100];

int main(){
    cin >> S >> T;

    rep(i, 0, S.length()){
        rep(j, 0, T.length()){
                if(S[i] == T[j]){
                    chmax(dp[i + 1][j + 1], dp[i][j] + 1);
                }
                chmax(dp[i + 1][j + 1], dp[i][j + 1]);
                chmax(dp[i + 1][j + 1], dp[i + 1][j]);
        }
    }

    int restore_i = S.length();
    int restore_j = T.length();
    while(restore_i > 0 && restore_j > 0){
        if(dp[restore_i][restore_j] == dp[restore_i-1][restore_j]){
            --restore_i;
        }else if(dp[restore_i][restore_j] == dp[restore_i][restore_j-1]){
            --restore_j;
        }else{
            ans = T[restore_j-1] + ans;
            --restore_i;
            --restore_j;
        }
    }

    cout << ans << endl;
    return 0;
}


