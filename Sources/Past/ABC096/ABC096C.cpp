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

// C - Grid Repainting 2
int H, W;
char grid[55][55];
string ans;

int main(){
    cin >> H >> W;

    ans = "Yes";
    repeq(i, 1, H){
        repeq(j, 1, W){
            cin >> grid[i][j];
        }
    }
    repeq(i, 1, H){
        repeq(j, 1, W){
            char tmp;
            if(grid[i][j] == '#'){
                tmp = '.';
                if(grid[i-1][j] == tmp && grid[i][j-1] == tmp && grid[i+1][j] == tmp && grid[i][j+1] == tmp){
                    ans = "No";
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}


