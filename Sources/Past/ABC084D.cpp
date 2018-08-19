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

// D - 2017-like Number
int Q;
vector<int> primes;


std::vector<int> MakePrime(int n) {
  std::vector<int> prime;
  prime.emplace_back(2);
  for (int i = 3; i <= n; i += 2) {
    bool a = false;
    for (int j = 3; j <= std::sqrt(i); j += 2) {
      if (i%j == 0) {
        a = true;
      }
    }
    if (a == false) {
      prime.emplace_back(i);
    }
  }
  return prime;
}

int main(){
    cin >> Q;

    primes = MakePrime(100000);

    vector<int> oknum;
    rep(i, 3, 100000){
        if(i%2 == 0) continue;
        if(binary_search(primes.begin(), primes.end(), i) && binary_search(primes.begin(), primes.end(), (i+1)/2)){
            oknum.push_back(i);
        }
    }

    rep(i, 0, Q){
        int ans=0;
        int l, r;
        cin >> l >> r;
        vector<int>::iterator lx, rx;
        lx = lower_bound(oknum.begin(), oknum.end(), l);
        rx = upper_bound(oknum.begin(), oknum.end(), r);
        ans = rx - lx;

        cout << ans << endl;
    }

    return 0;
}


