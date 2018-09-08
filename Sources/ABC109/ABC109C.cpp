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
int N, X;
int point[101000];
int diff[101000];
int ans = 0;


int gcd(int a,int b)
{
	if (a%b==0)
	{
		return(b);
    }
	else
	{
		return(gcd(b,a%b));
    }
}


int main(){
    cin >> N >> X;

    rep(i, 0, N){
        cin >> point[i];
        diff[i] = abs(point[i] - X);
    }
    
    if(N == 1){
        ans = diff[0];
    }else{
        sort(diff, diff+N, greater<>());
        int tmp = diff[0];
        if(tmp == 0) tmp = diff[1];
        rep(i, 0, N){
            if(diff[i] == 0) continue;
            tmp = gcd(tmp, diff[i]);
        }
        ans = tmp;
    }

    cout << ans << endl;
    return 0;
}


