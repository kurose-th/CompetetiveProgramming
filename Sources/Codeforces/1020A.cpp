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

// A. New Building for SIS
int N, H, A, B, K;

int main(){
    cin >> N >> H >> A >> B >> K;

    rep(i, 0, K){
        int ta, fa, tb, fb;
        int ans = 0;
        cin >> ta >> fa >> tb >> fb;
        ans += abs(ta - tb);
        
        if(ta == tb){
            ans += abs(fa - fb);
        }else{
            if((fa <= A && fb <= A)){
                ans += abs(fa - A) + abs(fb - A);
            }else if((fa >= B && fb >= B)){
                ans += abs(fa - B) + abs(fb - B);
            }else{
                ans += abs(fa - fb);
            }
        }
        cout << ans << endl;
    }
    

    return 0;
}


