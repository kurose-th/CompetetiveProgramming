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

// A - おつり
int n;
int coin[6] = {500, 100, 50, 10, 5, 1};
int ans = 0;


void greed(int money){
    rep(i, 0, 6){
        if(coin[i] <= money){
            money -= coin[i];
            ++ans;
            break;
        }
    }
    if(money>0) greed(money);
}

int main(){
    cin >> n;
    greed(1000-n);
    cout << ans << endl;
    return 0;
}


