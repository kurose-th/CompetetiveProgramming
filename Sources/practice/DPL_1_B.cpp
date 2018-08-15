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
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// Combinatorial - 0-1 Knapsack Problem
int n, W;
int weight[110], value[110];
int dp[110][10010];    
int main(){

    cin >> n >> W;
    rep(i, 0, n){
        cin >> value[i] >> weight[i];
    }

    // 初期条件
    rep(w, 0, W+1){
        dp[0][w] = 0;
    }

    // DP
    rep(i, 0, n){
        rep(w, 0, W+1){
            if(w >= weight[i]){
                dp[i+1][w] = max(dp[i][w], dp[i][w-weight[i]] + value[i]);
            }else{
                dp[i+1][w] = dp[i][w];
            }
        }
    }

    cout << dp[n][W] << endl;
    return 0;
}


