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

// C - たくさんの数式 / Many Formulas
int main(){
    string S;
    cin >> S;
    int L = S.size() - 1;
    
    long long ans = 0;
    for(int i=0;i<1<<L;++i){
        int l = 0;
        long long tmp = 0;
        int r;
        for(r=0;r<L;++r){
            if((i & (1 << r)) != 0){
                string t = S.substr(l, r - l+1);
                long long num = stoll(t);
                ans += num;
                l = r+1;
            }
        }
        string t = S.substr(l, r - l+1);
        long long num = stoll(t);
        tmp += num;
        ans += num;
    }
    cout << ans << endl;
    return 0;
}


