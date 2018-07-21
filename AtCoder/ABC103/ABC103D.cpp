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
int M;
int ans = 0;
const int mm = 101000;
bool island[mm];
int a[mm];
int b[mm];
vector<pair<int, pair<int, int>>> v;
int bridge[mm];

int main(){
    cin >> N >> M;

    repeq(i, 1, mm){
        island[i] = false;
    }
    rep(i, 0, M){
        cin >> a[i] >> b[i];
        v.push_back(make_pair(a[i], make_pair(a[i], b[i])));
    }
    sort(all(v), greater< pair<int, pair<int, int>> >());
    
    rep(i, 0, M){
        int kari = 0;
        rep(j, 0, M){
            if(((v[i].second.second <= v[j].second.first)) || (v[i].second.first >= v[j].second.second)){
                ++kari;
            }
        }
        ans = max(kari, ans);
    }

    cout << ans << endl;
    return 0;
}


