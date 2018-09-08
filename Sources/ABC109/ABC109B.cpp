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
int N;
string W[110];
string ans = "Yes";

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> W[i];
        rep(j, 0, i){
            if(W[j] == W[i]){
                ans = "No";
            }
        }
    }
    
    rep(i, 1, N){
        if(W[i-1].back() != W[i].front()){
            ans = "No";
        }
    }

    cout << ans << endl;
    return 0;
}


