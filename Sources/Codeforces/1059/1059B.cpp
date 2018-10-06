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

// 
int n, m;
char grid[1010][1010];
bool res[1010][1010];
bool ans = true;

int main(){
    cin >> n >> m;

    rep(j, 0, n+2){
        rep(i, 0, m+2){
            grid[i][j] = '.';
            res[i][j] = false;
        }
    }

    rep(j, 1, n+1){
        rep(i, 1, m+1){
            cin >> grid[i][j];
        }
    }
    
    rep(j, 1, n+1){
        rep(i, 1, m+1){
            if(grid[i-1][j-1] == '#' && grid[i-1][j] == '#' &&  grid[i][j-1] == '#' && grid[i+1][j+1] == '#'
            && grid[i+1][j] == '#' && grid[i][j+1] == '#' && grid[i-1][j+1] == '#' && grid[i+1][j-1] == '#'){
                res[i][j] = true;
            }
        }
    }
    rep(j, 1, n+1){
        rep(i, 1, m+1){
            if (grid[i][j] == '#')
            {
                    if (res[i - 1][j - 1] == false && res[i - 1][j] == false && res[i][j - 1] == false && res[i + 1][j + 1] == false &&
                     res[i + 1][j] == false && res[i][j + 1] == false && res[i - 1][j + 1] == false && res[i + 1][j - 1] == false)
                    {
                        ans = false;
                    }
            }else{
                if(res[i][j]){
                    if (grid[i - 1][j - 1] != '#' && grid[i - 1][j] != '#' && grid[i][j - 1] != '#' && grid[i + 1][j + 1] != '#' &&
                     grid[i + 1][j] != '#' && grid[i][j + 1] != '#' && grid[i - 1][j + 1] != '#' && grid[i + 1][j - 1] != '#')
                    {
                        ans = false;
                    }
                }
            }
        }
    }

    string ret;
    if(ans) ret = "YES"; else ret = "NO";
    cout << ret<< endl;
    return 0;
}


