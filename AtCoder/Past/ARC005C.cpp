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
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// C - 器物損壊！高橋君
int H, W;
int sy, sx;
int gy, gx;
const int MAZE_MAX = 510;
char maze[MAZE_MAX][MAZE_MAX];
bool dist[MAZE_MAX][MAZE_MAX];
int vx[4] = {1, 0, -1, 0};
int vy[4] = {0, 1, 0, -1};
string ans = "NO";
queue<pair<int, int>> nowq;
queue<pair<int, int>> nextq;

void bfs(){
    while(!nowq.empty()){
        pair<int, int> tmp = nowq.front();
        nowq.pop();
        rep(i, 0, 4){
            int ny = tmp.first + vx[i];
            int nx = tmp.second + vy[i]; 
            if(maze[ny][nx] == '.' && dist[ny][nx] == false){
                nowq.push(mp(ny, nx));
                dist[ny][nx] = true;
            }else if(maze[ny][nx] == '#'){
                nextq.push(mp(ny, nx));
                dist[ny][nx] = true;
            }else if(maze[ny][nx] == 'g'){
                ans = "YES";
            }
        }
    }
    nowq = nextq;
}

int main(){
    cin >> H >> W;
    rep(i, 0, H){
        rep(j, 0, W){
            cin >> maze[i][j];
            if(maze[i][j] == 's'){
                sy = i;
                sx = j;
            }
        }
    }

    rep(i, 0, MAZE_MAX) rep(j, 0, MAZE_MAX) dist[i][j] = false;

    nowq.push(mp(sy, sx));
    rep(i, 0, 3){
        bfs();
    }
    cout << ans << endl;
    return 0;
}


