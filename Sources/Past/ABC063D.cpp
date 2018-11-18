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

// D - Widespread
long N, A, B;
long h[100100];
long ans = 0;

bool enough(long n){
    bool res = true;

    

    return res;
}

int main(){
    cin >> N >> A >> B;
    rep(i, 0, N){
        cin >> h[i];
    }
    sort(h, h + N, greater<long>());

    long max = (h[0]+B-1) / B;


    cout << max << endl;
    return 0;
}


