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
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// C - 直訴
int main(){
    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double ans = 0.0;
    double cxb = xb - xa;
    double cyb = yb - ya;
    double cxc = xc - xa;
    double cyc = yc - ya;
    ans = abs(cxb*cyc - cyb*cxc)*0.5;
    printf("%.4f\n", ans);
    return 0;
}


