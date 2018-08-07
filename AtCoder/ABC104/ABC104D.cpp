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
#define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// 
string S;
int ans = 0;
ll dp[100010][4];
const ll MOD = 1000000007;

void add(ll &a, ll b){
    a += b;
    if(a>=MOD){
        a -= MOD;
    }
}

int main(){
    cin >> S;
    dp[0][0] = 1;

    rep(i, 0, S.size()){
        rep(j, 0, 4){
            if(S[i] != '?'){
                add(dp[i+1][j], dp[i][j]);
            }else{
                add(dp[i+1][j], dp[i][j] * 3LL % MOD);
            }
        }
        if (S[i] == 'A' || S[i] == '?'){
            add(dp[i+1][1], dp[i][0]);
        }
        if (S[i] == 'B' || S[i] == '?'){
            add(dp[i+1][2], dp[i][1]);
        }
        if (S[i] == 'C' || S[i] == '?'){
            add(dp[i+1][3], dp[i][2]);
        }

    }

    cout << dp[S.size()][3] << endl;
    return 0;
    /*
    vector<int> nb;
    rep(i, 0, S.length()){
        int t;
        if(i==0){t=0;}else{t=nb[i-1];}
       nb.push_back(t + ((S[i] == 'B') ? 1 : 0));
    }
    vector<int> nc;
    rep(i, 0, S.length()){
        if(S[i] == 'C'){
            nc.push_back(i);
        }
    }

    rep(i, 0, S.length()){
        if(S[i] == 'A'){
            rep(j, 0, nc.size()){
                if(i<nc[j]){
                    ans += nb[nc[j]] - nb[i];
                }
            }
        }
    }
    */ 
   
}


