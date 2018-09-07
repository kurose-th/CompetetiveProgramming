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
int N, M;
string s, t;
int main(){
    cin >> N >> M;
    cin >> s >> t;

    string s_a, s_b;
    int ast=-1;
    rep(i, 0, s.length()){
        if(s[i] == '*') ast = i;
    }
    bool ok = true;
    if(ast != -1){
        s_a = s.substr(0, ast);
        s_b = s.substr(ast+1);

        if(t.length() < s.length()-1) ok = false;
        if(t.substr(0, ast) != s_a) ok = false;
        if(ok){
            if (!(t.size() >= s_b.size() && t.find(s_b, t.size() - s_b.size()) != std::string::npos)){
                ok = false;
            }
        }
    }else{
        if(t != s) ok = false;
    }

    string ans = (ok)? "YES" : "NO";
    cout << ans << endl;
    return 0;
}


