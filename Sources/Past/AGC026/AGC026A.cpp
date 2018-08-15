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

// 
int N;
int slime[110];
int ans = 0;

int main(){
    cin >> N;

    rep(i, 0, 110){
        slime[i] = 6000;
    }

    rep(i, 0, N){
        int tmp;
        cin >> tmp;
        slime[i+1] = tmp;
    }

    while(true){
        int a = 0;
        rep(i, 0, N+1){
            if(slime[i] == slime[i+1] && slime[i+1] == slime[i+2]){
                slime[i+1] = 10000-ans;
                a = 1;
                ++ans;
            }
            if(slime[i] == slime[i+1]){
                    slime[i+1] = 10000-ans;
                a = 1;
                ++ans;
            }
        }
        if(a == 0) break;
    }

    cout << ans << endl;
    return 0;
}


