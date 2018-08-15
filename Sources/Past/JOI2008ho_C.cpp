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
template <typename Array, int N>
constexpr int arrayarsize1D( Array (&)[N] ) {
    return N;
}

// C - ダーツ
int N, M;
int ans = 0;
int P[1010];
vector<int> Q;

int main(){
    cin >> N >> M;
    
    rep(i, 0, N){
        cin >> P[i];
    }
    P[N] = 0;

    int arsize=0;
    repeq(i, 0, N){
        repeq(j, 0, N){
            Q.push_back(P[i]+P[j]);
            ++arsize;
        }
    }

    sort(all(Q));

    rep(i, 0, arsize){
        int tmpans = Q[i];
        int res = M - Q[i];
        if(res<0) continue;
        tmpans += *(upper_bound(Q.begin(), Q.end(), res) - 1);
        ans = max(ans, tmpans);
    }

    cout << ans << endl;
    return 0;
}


