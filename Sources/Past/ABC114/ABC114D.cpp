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
#include <numeric>
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
long N;
long ans = 0;

// エラトステネスの篩
// 数字格納Ver.
std::vector<int> MakePrime(int n)
{
    std::vector<int> prime;
    prime.emplace_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        bool a = false;
        for (int j = 3; j <= std::sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                a = true;
            }
        }
        if (a == false)
        {
            prime.emplace_back(i);
        }
    }
    return prime;
}

int numsoi(int n){
    int num = 0;
    int kai = 0;
    while(true){
        int tmp = N/pow(n, kai);
        num += tmp;
        kai++;
        if(tmp==0) break;    
    }
    return num;
}

int main(){
    cin >> N;

    vector<int> pr = MakePrime(N);
    map<int, int> soin;

    rep(i, 0, pr.size()){
        soin[pr[i]] += numsoi(pr[i]);
        cout << pr[i] << " " << numsoi(pr[i]) << endl;
    }


    cout << ans << endl;
    return 0;
}


