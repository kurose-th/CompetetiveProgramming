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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 
int N;
int K;
string S;
string ans;

int main(){
    cin >> N >> K;
    cin >> S;
    
    if(S[K-1] == 'A') { 
        S[K-1] = 'a';
    }else if(S[K-1] == 'B'){
        S[K-1] = 'b';
    }else if(S[K-1] == 'C'){
        S[K-1] = 'c';
    }
    ans = S;
    cout << ans << endl;
    return 0;
}


