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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 
int N;
string S;
string ans;
string what[4] = {"YYMM", "MMYY", "AMBIGUOUS", "NA"};

int main(){
    cin >> S;

    int y = stoi(S.substr(0, 2));
    int m = stoi(S.substr(2, 2));

    if(y>12){
        if(m==0 || m>12){
            ans = what[3];
        }else{
            ans = what[0];
        }
    }else if(m>12){
        if(y==0 || y>12){
            ans = what[3];
        }else{
            ans = what[1];
        }
    }else{
        if(y==0 && m==0){
            ans = what[3];
        }else if(y==0){
            ans = what[0];
        }else if(m==0){
            ans = what[1];
        }else{
            ans = what[2];
        }
    }

    cout << ans << endl;
    return 0;
}


