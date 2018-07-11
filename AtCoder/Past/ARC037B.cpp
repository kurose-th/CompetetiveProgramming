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
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// B - バウムテスト
int N, M;
int ans = 0;
const int Z = 110;
vector<int> g[Z];
bool reached[Z];

bool dfs(int now, int src){

    
}

int main(){
    cin >> N >> M;

    rep(i, 0, Z) reached[i] = false;

    rep(i, 0, M){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    rep(i, 0, N){
        if(dfs(i, -1)){
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}


