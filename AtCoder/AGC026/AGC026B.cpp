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
int T;

int main(){
    cin >> T;

    rep(i, 0, T){
        string ans = "Yes";
        unsigned long long int A, B, C, D;
        cin >> A >> B >> C >> D;
        
        unsigned long long int sA = A;
        unsigned long long int sB = B;
        unsigned long long int sC = C;
        unsigned long long int sD = D;
        rep(j, 0, 1000000){
            if(sA<sB){
                ans = "No";
                break;
            }
            sA -= sB;
            if(sA <= sC) sA += sD;
        }
        cout << ans << endl;
    }

    return 0;
}


