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

// D - Five, Five Everywhere

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
    int N;
    cin >> N;

    vector<int> prime = MakePrime(55555);
    vector<int> ans;
    int ret = N;
    int i=0;
    while(ret>0){
        if(prime[i]%5 == 1){
            ans.push_back(prime[i]);
            --ret;
        }
        ++i;
    }
    rep(i, 0, ans.size()){
        cout << ans[i] << " ";
    }
    return 0;
}


