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

// B - Maximum Difference
int main(){
    int N;
    cin >> N;
    int A[110];
    rep(i, 0, N){
        cin >> A[i];
    }
    int ans = 0;

    rep(i, 0, N){
        rep(j, 0, N){
            ans = max(ans, abs(A[i]-A[j]));
        }
    }

    cout << ans << endl;
    return 0;
}


