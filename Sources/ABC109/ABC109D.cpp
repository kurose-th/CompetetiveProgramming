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
int H, W;
int a[550][550];
int ans = 0;
int xa[300000], ya[300000], xb[300000], yb[300000];


int main(){
    cin >> H >> W;
    rep(i, 0, 550){
        rep(j, 0, 550){
            a[i][j] = 100;
        }
    }
    rep(i, 1, H+1){
        rep(j, 1, W+1){
            cin >> a[i][j];
        }
    }
    rep(i, 1, H+1){
        rep(j, 1, W+1){
            if(a[i][j]%2 != 0){
                if(a[i][j+1] < 50){
                    a[i][j]--;
                    a[i][j+1]++;
                    xa[ans] = i;
                    ya[ans] = j;
                    xb[ans] = i;
                    yb[ans] = j+1;
                    ans++;
                }else if(a[i+1][j] < 50){
                    a[i][j]--;
                    a[i+1][j]++;
                    xa[ans] = i;
                    ya[ans] = j;
                    xb[ans] = i+1;
                    yb[ans] = j;
                    ans++;
                // }else if(a[i][j-1]<50){
                //     a[i][j]--;
                //     a[i][j-1]++;
                //     xa[ans] = i;
                //     ya[ans] = j;
                //     xb[ans] = i;
                //     yb[ans] = j-1;
                //     ans++;
                // }else if(a[i-1][j]<50){
                //     a[i][j]--;
                //     a[i-1][j]++;
                //     xa[ans] = i;
                //     ya[ans] = j;
                //     xb[ans] = i-1;
                //     yb[ans] = j;
                //     ans++;
                }
            }
        }
    }

    cout << ans << endl;
    if(ans>0){
    rep(i, 0, ans){
        cout << xa[i] << " " << ya[i] << " " << xb[i] << " " << yb[i] << endl;
    }
    }
    
    return 0;
}


