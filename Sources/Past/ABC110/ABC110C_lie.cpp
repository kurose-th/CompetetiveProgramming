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

// C - String Transformation
// 嘘解法である(S=abb, T=aab)
string S, T;
string ans = "Yes";
map<char, int> s, t;

int main(){
    cin >> S >> T;

    rep(i, 0, S.size()){
        ++s[S[i]];
    }
    rep(i, 0, T.size()){
        ++t[T[i]];
    }
    
    int ss[26], tt[26];
    int tmp=0;
    for(char c='a';c<='z';c++){
        ss[tmp] = s[c];
        tt[tmp] = t[c];
        tmp++;
    }
    sort(ss, ss+26, greater<int>());
    sort(tt, tt+26, greater<int>());
    rep(i, 0, 26){
        if(ss[i] != tt[i]){
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}


