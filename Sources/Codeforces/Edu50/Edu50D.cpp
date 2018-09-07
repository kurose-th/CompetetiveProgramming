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
int n, m;
ll A[301000];
ll S=0;
ll B[301000];
ll T;
int ans = -1;
map<ll, int> maps;

int main(){
    cin >> n;
    cin >> A[0];
    S = A[0];
    ++maps[S];
    rep(i, 1, n){
        cin >> A[i];
        S += A[i];
        ++maps[S];
    }
    cin >> m;
    cin >> B[0];
    T = B[0];
    ++maps[T];
    rep(i, 1, m){
        cin >> B[i];
        T += B[i];
        ++maps[T];
    }

    if(S != T){
        cout << ans << endl;
        return 0;
    }

    int ans = 0;
    repi(maps, itr){
        if(itr->second == 2){
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}


