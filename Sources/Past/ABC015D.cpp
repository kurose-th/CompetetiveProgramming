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

// D - 高橋くんの苦悩
int W, N, K;
int A[100], B[100];
int ans = 0;
int dp[100][11000][100] = {0};

int main(){
    cin >> W >> N >> K;
    rep(i, 0, N){
        cin >> A[i] >> B[i];
    }

    repeq(k, 0, K){
        rep(n, 0, N){
            repeq(w, 0, W){
                if(k>=K){
                    dp[n + 1][w][k] = max(dp[n+1][w][k], dp[n][w][k]);
                }else{
                    if(w+A[n]<=W){
                        dp[n+1][w+A[n]][k+1] = max(dp[n+1][w+A[n]][k+1], dp[n][w][k] + B[n]);
                        dp[n + 1][w][k] = max(dp[n+1][w][k], dp[n][w][k]);
                    }else{
                        dp[n + 1][w][k] = max(dp[n+1][w][k], dp[n][w][k]);
                    }
                }
            }
        }
    }

    cout << dp[N][W][K] << endl;
    return 0;
}


