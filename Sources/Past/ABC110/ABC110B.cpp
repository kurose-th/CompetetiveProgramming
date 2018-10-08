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
int N, M, X, Y;
int x[110], y[110];
string ans = "War";

int main(){
    cin >> N >> M >> X >> Y;

    rep(i, 0, N){
        cin >> x[i];
    }
    rep(i, 0, M){
        cin >> y[i];
    }

    rep(i, X+1, Y+1){
        bool flg = false;
        rep(j, 0, N){
            if(x[j]>=i){
                flg = true;
            }
        }
        rep(j, 0, M){
            if(y[j]<i){
                flg = true;
            }
        }
        if(!flg){
            ans = "No War";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

