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

// A - 高橋君とお肉
int main(){
    int N;
    cin >> N;

    int t[4];
    rep(i, 0, N){
        cin >> t[i];
    }

    int ans = 10000000;
    for(int i=0;i<1<<N;++i){
        int r;
        int m_0 = 0;
        int m_1 = 0;
        for(r=0;r<N;++r){
            // Bitが立っているときの処理
            if((i & (1 << r)) != 0){
                m_0 += t[r];
            }else{
                m_1 += t[r];
            }
        }
        int tmp = max(m_0, m_1);
        ans = min(ans, tmp);
    }
    
    cout << ans << endl;
    return 0;
}


