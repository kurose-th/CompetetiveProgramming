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
using namespace std;
typedef long long ll;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// C - Shopping Street
int N;
int F[100][10];
int P[100][11];
int sum[100];
int ans = -2000000000;

int main(){
    cin >> N;
    rep(i, 0, N){
        rep(j, 0, 10){
            cin >> F[i][j];
        }
    }
    rep(i, 0, N){
        rep(j, 0, 11){
            cin >> P[i][j];
        }
    }
    int L = 10;
    // 2^L - 1回の全探索
    for(int i=0;i<1<<L;++i){
        if(i==0) continue;
        int r;
        rep(j, 0, N){
            sum[j] = 0;
        }
        for(r=0;r<L;++r){
            // Bitが立っているときの処理
            if((i & (1 << r)) != 0){
                rep(j, 0, N){
                    sum[j] += F[j][r];
                }
            }
        }
        int tmp=0;
        rep(j, 0, N){
            tmp += P[j][sum[j]];
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}


