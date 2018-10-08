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

// 
ll N;
ll x[110], y[110], h[110];
ll man[110][110][110];

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> x[i] >> y[i] >> h[i];
    }
    if(N==1){
    cout << x[0] << " "<< y[0] << " "<< h[0] << endl;
    return 0;
    }
    rep(i, 0, N){
        rep(j, 0, 101){
            rep(k, 0, 101){
                man[i][j][k] = h[i] + abs(x[i]-j)+abs(y[i]-k);
                if(h[i] == 0) man[i][j][k] = -1;
            }
        }
    }

    ll ansh = -1;
    ll ansx = -1;
    ll ansy = -1;
    rep(i, 0, N){
        if(h[i] == 0) continue;
        rep(j, 0, 101){
            rep(k, 0, 101){
                bool flg = true;
                bool look = false;
                rep(l, 0, N){
                    if(i==l) continue;
                    if(h[l] == 0) continue;
                    if(man[i][j][k] != man[l][j][k]){flg = false;}
                    look = true;
                }
                if(flg && man[i][j][k]>ansh && look){
                    ansh = man[i][j][k];
                    ansx = j;
                    ansy = k;
                }
            }
        }
    }

    if(ansh == -1){
        rep(i, 0, N){
            if(ansh<h[i]){
                ansh = h[i];
                ansx = x[i];
                ansy = y[i];
            }
        }
    }

    cout << ansx << " "<< ansy << " "<< ansh << endl;
    return 0;
}


