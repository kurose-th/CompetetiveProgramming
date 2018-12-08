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
int N;
int p[10];
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> p[i];
    }
    int tmp = 0;
    int tt=0;
    rep(i, 0, N){
        if(tmp<= p[i]){
        tmp = max(tmp, p[i]);
        tt = i;
        }
    }
    rep(i, 0, N){
        if(i==tt){ans += p[i]/2;}
        else{
            ans += p[i];
        }
    }

    cout << ans << endl;
    return 0;
}


