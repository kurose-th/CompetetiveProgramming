#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// C - Linear Approximation
int main(){
    long int N;
    cin >> N;

    long int A[200100];
    long int B[200100];
    rep(i, 0, N){
        cin >> A[i];
        B[i] = A[i] - (i+1);
    }

    map<long int, long int> mp;
    rep(i, 0, N){
        mp[B[i]]++;
    }
    
    
    long int maxnum = 1;
    long int max = 0;
    for(map<long int, long int>::iterator it=mp.begin(); it != mp.end(); ++it){
        if(maxnum < it->second){
            max = it->first;
            maxnum = it->second;
        }
    }
    long int ans=0;
    rep(i, 0, N){
        ans += abs(B[i] - max);
    }

   /*
    long int tt = 0;
    long int test = 0;
        rep(i, 0, N){
            tt += abs(B[i] - test);
        }
    long int ans = tt;
    for(map<long int, long int>::iterator it=mp.begin(); it != mp.end(); ++it){
        test = it->first;
        long int tn = it->second;
        long int tt = 0;

        for(map<long int, long int>::iterator jt=mp.begin(); jt != mp.end(); ++jt){
            tt += abs(jt->first - test)*jt->second;
        }
        ans = min(ans, tt);
    }
    */
    cout << ans << endl;
    return 0;
}


