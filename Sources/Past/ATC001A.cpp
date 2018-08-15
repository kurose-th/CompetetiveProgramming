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


// A - 深さ優先探索
int H, W;
char maze[510][510];
bool reached[510][510];

void dfs(int x, int y){

    if(x<0 || y<0 || x >= W || y >= H || maze[x][y] == '#') return;
    if(reached[x][y]) return;
    reached[x][y] = true;

    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);

}

int main(){
    cin >> H >> W;

    int start[2];
    int goal[2];
    rep(i, 0, H){
        rep(j, 0, W){
            cin >> maze[j][i];
            if(maze[j][i] == 's'){
                start[0] = j;
                start[1] = i;
            }
            if(maze[j][i] == 'g'){
                goal[0] = j;
                goal[1] = i;
            }
        }
    }
    dfs(start[0], start[1]);
    string ans = (reached[goal[0]][goal[1]]) ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}


