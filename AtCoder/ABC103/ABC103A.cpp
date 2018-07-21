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
int ans = 100000;
int task[3];
vector<int> arr{0, 1, 2};

int main(){
    cin >> task[0] >> task[1] >> task[2];

    int cost = 0;
    do{
        cost = abs(task[arr[1]] - task[arr[0]]) + abs(task[arr[2]] - task[arr[1]]);
        ans = min(ans, cost);

    }while(next_permutation(arr.begin(), arr.end()));

    cout << ans << endl;
    return 0;
}


