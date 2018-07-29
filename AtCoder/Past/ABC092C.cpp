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

// C - Traveling Plan
int N;
vector<int> ans;
int A[101000] = {};
int sum = 0;

int main(){
    cin >> N;
    repeq(i, 1, N){
        cin >> A[i];
        sum += abs(A[i] - A[i-1]);
    }
    sum += abs(A[N]);

    repeq(i, 1, N){
        if(A[i+1] > A[i] && A[i] < A[i-1]){
            int tmp;
            tmp = (abs(A[i] - A[i-1]) < abs(A[i] - A[i+1])) ? 2*abs(A[i-1] - A[i]) : 2*abs(A[i+1] - A[i]);
            ans.push_back(sum - tmp);
        }else if(A[i+1] < A[i] && A[i] > A[i-1]){
            int tmp;
            tmp = (abs(A[i] - A[i-1]) < abs(A[i] - A[i+1])) ? 2*abs(A[i-1] - A[i]) : 2*abs(A[i+1] - A[i]);
            ans.push_back(sum - tmp);
        }else{
            ans.push_back(sum);
        }
    }

    rep(i, 0, N){
        cout << ans[i] << endl;
    }
    return 0;
}


