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
int N, T;
int c[1010], t[1010];
int ans = 10000;

int main(){
    cin >> N >> T;
    rep(i, 0, N){
        cin >> c[i] >> t[i];
        if(c[i]<=ans && t[i]<=T){
            ans = c[i];
        }
    }
    if(ans==10000){
        cout << "TLE" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}


