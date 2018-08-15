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

// C - Same Integers
int A, B, C;
int ans = 0;
vector<int> num;

int main(){
    cin >> A >> B >> C;
    num.push_back(A);
    num.push_back(B);
    num.push_back(C);
    sort(all(num));
    ans += num[2] - num[1];
    ans += (num[2] - (num[0] + ans)+1)/2;

    int diff = num[2] - num[1] + num[2] - num[0];
    if(diff%2 == 1) ++ans;

    cout << ans << endl;
    return 0;
}


