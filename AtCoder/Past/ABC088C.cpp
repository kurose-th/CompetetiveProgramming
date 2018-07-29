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

// C - Takahashi's Information
int c[3][3];
int b[3];
int a[3];
string ans;

int main(){
    rep(i, 0, 3){
        rep(j, 0, 3){
            cin >> c[i][j];
            a[i] += c[i][j];
            b[j] += c[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}


