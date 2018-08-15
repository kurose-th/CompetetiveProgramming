#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// A - 2点間距離の最大値 ( The longest distance )
int main(){
    int N;
    cin >> N;
    int x[110], y[110];
    rep(i, 0, N){
        cin >> x[i] >> y[i];
    }
    double ans = 0.0;

    rep(i, 0, N){
        rep(j, 0, N){
            ans = max(ans, sqrt(pow(y[j] - y[i], 2) + pow(x[j] - x[i], 2)));
        }
    }

    cout << ans << endl;
    return 0;
}


