#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// D - Binomial Coefficients
int main(){
    int n;
    cin >> n;

    vector<int> a;
    int src;
    rep(i, 0, n){
        cin >> src;
        a.pb(src);
    }
    sort(all(a));

    int ans_1 = a.back();
    double max_half = ans_1 / 2.0;
    int diff = INT32_MAX;
    int diff_ans = 0;
    rep(i, 0, n){
        if((double)abs(max_half - a[i])<diff){
            diff = abs(max_half - a[i]);
            diff_ans = i;
        }
    }

    cout << ans_1 << " " << a[diff_ans] << endl;
    return 0;
}


