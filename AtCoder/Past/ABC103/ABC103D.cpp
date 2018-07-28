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

// 
int N, M;
int ans = 0;
vector<pair<int, int>> v;

int main(){
    cin >> N >> M;

    v.resize(M);

    rep(i, 0, M){
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(b, a);
    }
    sort(all(v));

    int t = 0;
    rep(i, 0, M){
        if(t <= v[i].second){
            ++ans;
            t = v[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}


