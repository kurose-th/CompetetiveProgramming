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

// A - 東京都
int T;

int cut(string Sc){
    int ret = 0;
    while(true){
        auto ft = Sc.find("tokyo");
        auto fk = Sc.find("kyoto");

        if(ft == string::npos && fk == string::npos){
            break;
        }else{
            Sc = Sc.substr(min(ft, fk)+5);
            ++ret;
        }
    }

    return ret;
}

int main(){
    cin >> T;

    rep(i, 0, T){
        string S;
        cin >> S;
        cout << cut(S) << endl;
    }
    return 0;
}


