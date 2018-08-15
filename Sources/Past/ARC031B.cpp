#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()


// B - 埋め立て
int H, W;
char islands[110][110];
char tmp_islands[110][110];
bool reached[110][110];

bool evaluate(){
    bool r = true;
    rep(i, 0, H){
        rep(j, 0, W){
            if(tmp_islands[i][j] == 'o' && reached[i][j] != true){
                r = false;
            }
            reached[i][j] = false;
        }
    }
    return r;
}

void dfs(int x, int y){
    if(x<0 || y<0 || x >= W || y >= H || tmp_islands[x][y] == 'x') return;
    if(reached[x][y]) return;
    reached[x][y] = true;

    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

int main(){
    H = 10;
    W = 10;
    string ans = "NO";

    int start[2];
    int goal[2];
    rep(i, 0, H){
        rep(j, 0, W){
            char t;
            cin >> t;
            islands[i][j] = tmp_islands[i][j] = t;
        }
    }
    rep(i, 0, H){
        rep(j, 0, W){
            if(islands[i][j] == 'x'){
                tmp_islands[i][j] = 'o';
                dfs(i, j);
                tmp_islands[i][j] = 'x';
                if(evaluate()){
                    ans = "YES";
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}


