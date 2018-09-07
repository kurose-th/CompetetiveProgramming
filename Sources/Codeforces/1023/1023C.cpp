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

// 
int N, K;
string S;

int main(){
    cin >> N >> K;
    cin >> S;

    int left = K/2;
    int right = K/2;
    string ans;
    rep(i, 0, N){
        if(S[i] == '(' && left>0){
            --left;
            ans+='(';
        }
        if(S[i] == ')' && right>0){
            --right;
            ans += ')';
        }
    }

    cout << ans << endl;
    return 0;
}


