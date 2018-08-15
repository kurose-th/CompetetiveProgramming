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

// C - March
int N;
int march[5];
char pattern[5] = {'M', 'A', 'R', 'C', 'H'};
ll ans = 0;
map<char, ll> m;
string march_s = "MARCH";

int main(){
    cin >> N;
    rep(i, 0, N){
        string S;
        cin >> S;
        m[S[0]]++;
    }

    rep(a, 0, 5){
        rep(b, a+1, 5){
            rep(c, b+1, 5){
                ans += m[march_s[a]] * m[march_s[b]] * m[march_s[c]];
            }
        }
    }
    cout << ans << endl;
    return 0;
}


