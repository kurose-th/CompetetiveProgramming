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

// C - Candies
int N;
int A[2][110];
int dp[5][110];
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, 2){
        rep(j, 0, N){
            cin >> A[i][j];
        }
    }

    dp[0][0] = A[0][0];


    rep(i, 0, 2){
        rep(j, 0, N){
            if(i==0){
                if(j==0){
                    dp[i][j] = A[i][j];
                }else{
                    dp[i][j] = dp[i][j - 1] + A[i][j];
                }
            }else{
                if(j==0){
                    dp[i][j] = dp[0][0] + A[i][j];
                }
                dp[i][j] = max(dp[i-1][j], dp[i][j - 1]) + A[i][j];
            }
        }
    }

    cout << dp[1][N-1] << endl;
    return 0;
}


