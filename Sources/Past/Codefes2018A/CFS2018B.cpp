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
int N, M, A, B;
int L[110], R[110];
int num[110];
int ans = 0;

int main(){
    cin >> N >> M >> A >> B;
    rep(i, 0, N){
        num[i] = B;
    }
    rep(i, 0, M){
        cin >> L[i] >> R[i];
        rep(j, L[i]-1, R[i]){
            num[j] = A;
        }
    }

    rep(i, 0, N){
        ans += num[i];
    }

    cout << ans << endl;
    return 0;
}


