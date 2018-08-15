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
typedef long long ll;

// C - Linear Approximation
ll ans = 0;
int main(){
    ll N;
    cin >> N;

    ll A[200100];
    vector<ll> B;

    rep(i, 0, N){
        cin >> A[i];
        B.push_back(A[i] - (i+1));
    }
    sort(all(B));

    ll b = B[N/2];
    rep(i, 0, N){
        ans += abs(B[i] - b);
    }

    cout << ans << endl;
    return 0;
}


