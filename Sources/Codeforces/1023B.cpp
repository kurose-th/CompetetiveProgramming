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
ll N, K;
ll ans;

int main(){
    cin >> N >> K;


    if(N%2 == 1){
        if(K%2 == 0){
            ans = min(K/2-1, N-K/2);
        }else{
            ans = min(K/2, N-K/2);
        }
    }else{
        if(K%2 == 0){
            ans = min(N-K/2, K/2-1);
        }else{
            ans = min(K/2, N-K/2);
        }
    }

    if((N*2-1 < K) || K<=2) ans = 0;

    cout << ans << endl;
    return 0;
}


