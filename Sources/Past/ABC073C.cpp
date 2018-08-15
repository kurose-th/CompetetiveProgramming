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

// C - Write and Erase
int N;
map<int, int> A;
int ans = 0;

int main(){
    cin >> N;
    rep(i, 0, N){
        int tmp;
        cin >> tmp;
        ++A[tmp];
    }

    for(auto itr = A.begin();itr != A.end();++itr){
        if(itr->second %2 == 1) ++ans;
    }

    cout << ans << endl;
    return 0;
}


