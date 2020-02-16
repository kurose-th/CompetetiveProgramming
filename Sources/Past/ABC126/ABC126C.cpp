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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 
double N, K;
double ans;

int main(){
    cin >> N >> K;
    
    if(K==1){
        ans = 1;
        cout << ans << endl;
        return 0;
    }

    double kouho =0.0;
    rep(i, 0, N+1){
        if(i>=K){
            kouho++;
        }
    }

    rep(i, 1, (long)N-kouho+1){
        long tmp = i;
        double a = 0.0;
        while(tmp<K){
            tmp*=2;
            a++;
        }
        ans += (1.0/N) * 1.0/pow(2.0,a);
    }

    ans += kouho/N;
    cout << setprecision(12) <<  ans << endl;
    return 0;
}


