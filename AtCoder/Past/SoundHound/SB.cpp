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

// 
int main(){
    string S;
    int w;
    cin >> S >> w;

    string ans;
    for(int i=0;i<S.size();){
        ans += S.substr(i, 1);
        i += w;
    }
    cout << ans << endl;
    return 0;
}


