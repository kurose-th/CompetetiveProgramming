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

// D - カード並べ
int n, k;
vector<string> a;
int ans = 0;
map<string, bool> mapp;

int main(){
    cin >> n >> k;

    rep(i, 0, n){
        int tmp;
        cin >> tmp;
        a.pb(to_string(tmp));
    }
    cout << ans << endl;
    return 0;
}


