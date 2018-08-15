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

// B - 辞書式順序
string S;

int main(){
    cin >> S;

    if(S.size()>1){
        cout << S.substr(0, S.size()-1) << endl;
    }else{
        char ans = S[0];
        if(ans == 'a'){
            cout << -1 << endl;
        }else{
            ans -= 1;
            cout << ans << endl;
        }
    }
    return 0;
}


