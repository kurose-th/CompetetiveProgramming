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
int N;
int a[5000];
ll ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> a[i];
    }

    rep(i, 0, N){
        ans += a[i]-1;
    }

    cout << ans << endl;
    return 0;
}


