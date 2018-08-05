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
string S;
string ans = "AC";

int main(){
    cin >> S;

    if(S[0] != 'A') ans = "WA";

        bool tmp = false;
    repeq(i, 2, S.length()-2){
        if(S[i] == 'C'){
            if(!tmp){
                tmp = true;
            }else{
                cout << "WA" << endl;
                return 0;
            }
        }
    }

    if(!tmp) ans = "WA";
        if((S[1] < 'a' || S[1] > 'z')){
            ans = "WA";
        }

        if((S[S.length()-1] < 'a' || S[S.length()-1] > 'z')){
            ans = "WA";
        }
    cout << ans << endl;
    return 0;
}


