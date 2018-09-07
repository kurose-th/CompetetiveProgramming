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
int q;

int main(){
    cin >> q;
    rep(i, 0, q){
        ll n, m, k;
        ll ans = -1;
        cin >> n >> m >> k;
        if(abs(n) > k || abs(m) > k){
            cout << ans << endl;
            continue;
        }
        if(abs(n) == abs(m)){
            if(abs(n)%2==0){
                if(k%2==0){
                    ans = k;
                }else{
                    ans = k-2;
                }
            }else{
                if(k%2==0){
                    ans = k-2;
                }else{
                    ans = k;
                }
            }
        }else if(abs(n)%2==0 && abs(m)%2==0){
                if(k%2==0){
                    ans = k;
                }else{
                    ans = k-2;
                }
        }else if(abs(n)%2!=0 && abs(m)%2!=0){
                if(k%2==0){
                    ans = k-2;
                }else{
                    ans = k;
                }
        }else if((abs(n)%2==0 && abs(m)%2!=0)){
                if(k%2==0){
                    ans = k-1;
                }else{
                    ans = k-1;
                }
        }else if((abs(n)%2!=0 && abs(m)%2==0)){
                if(k%2==0){
                    ans = k-1;
                }else{
                    ans = k-1;
                }
        }else{
            ans = k-1;
        }
        cout << ans << endl;
    }

    return 0;
}


