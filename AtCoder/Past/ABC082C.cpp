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
#define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// C - Good Sequence
int N;
map<int, int> m;
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        int tmp;
        cin >> tmp;
        ++m[tmp];
    }
    repi(m, itr){
        if(itr->first <= itr->second){
            ans += itr->second - itr->first;
        }else{
            ans += itr->second;
        }
    }

    cout << ans << endl;
    return 0;
}


