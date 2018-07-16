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
int N;
string S;
ll ans = 0;

int main(){
    cin >> N;
    cin >> S;

    int NN = 2*N;
    vector<int> narabe;
    rep(i, 0, N){
        narabe.push_back(1);
        narabe.push_back(0);
    }
    sort(narabe.begin(), narabe.end());
    int num=0;
    cout << narabe.size() << endl;
    do{
        string red;
        string blue;
        rep(i, 0, NN){
            if(narabe[i] > 0){
                red += S[i];
            }else{
                blue += S[i];
            }
        }
        reverse(blue.begin(), blue.end());
        if(red.compare(blue) == 0){
            ++ans;
        }
        ++num;
        for(auto x : narabe) cout << x << " "; cout << "\n";
    }while(next_permutation(narabe.begin(), narabe.end()));

    cout << num <<endl;
    cout << ans << endl;
    return 0;
}


