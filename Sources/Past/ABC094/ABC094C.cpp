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

// C - Many Medians
int N;
vector<ll> x;
vector<ll> A;
vector<ll> ans;

int main(){
    cin >> N;
    rep(i, 0, N){
        ll tmp;
        cin >> tmp;
        x.push_back(tmp);
        A.push_back(tmp);
    }

    sort(all(A));
    rep(i, 0, N){
        if(x[i] >= A[(N/2)]){
            cout << A[N/2-1] << endl;
        }else{
            cout << A[N/2] << endl;
        }
    }

    return 0;
}


