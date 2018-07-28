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

// C - 積み重ね
int N;
int ans = 0;
int w[60];
vector<int> haichi;

int main(){
    cin >> N;
    rep(i, 0, N){
        cin >> w[i];
    }

    haichi.push_back(w[0]);
    rep(i, 1, N){
        if(haichi[0] < w[i]){
            haichi.insert(haichi.begin(), w[i]);
        }else{
            for(int j = haichi.size()-1;j>=0;--j){
                if(haichi[j] >= w[i]){
                    haichi[j] = w[i];
                    break;
                }
            }
        }
    }
    ans = haichi.size();
    cout << ans << endl;
    return 0;
}


