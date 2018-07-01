#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// A - コンテスト
int main(){
    int N;
    cin >> N;
    int p[110];
    int sum=0;
    rep(i, 0, N){
        cin >> p[i];
        sum+=p[i];
    }
    int dp[110][10100];
    repeq(i, 0, N){
        repeq(j, 0, sum){
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;

    repeq(i, 0, N){
        repeq(j, 0, sum){
            if(dp[i][j]){
                dp[i+1][j] = 1;
                dp[i+1][j+p[i]] = 1;
            }
        }
    }

    int ans=0;
    repeq(j, 0, sum){
        if(dp[N][j]){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}


