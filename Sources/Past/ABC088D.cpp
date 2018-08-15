#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <queue>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// D - Grid Repainting
int H, W;
int sy, sx;
int gy, gx;
char maze[60][60];
int dist[60][60];
int vx[4] = {1, 0, -1, 0};
int vy[4] = {0, 1, 0, -1};
int ans = -1;
int numwhite = 0;
queue<pair<int, int>> q;

void bfs(pair<int, int> startq){
    q.push(startq);

    while(!q.empty()){
        pair<int, int> tmp = q.front();
        q.pop();
        rep(i, 0, 4){
            int nx = tmp.first + vx[i];
            int ny = tmp.second + vy[i]; 
            if(maze[nx][ny] == '.' && dist[nx][ny] == 0){
                q.push(mp(nx, ny));
                dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
            }
        }
    }
}

int main(){
    cin >> H >> W;
    
    rep(i, 0, 60){
        rep(j, 0, 60){
            dist[i][j] = 0;
        }
    }
    repeq(i, 1, H){
        repeq(j, 1, W){
            cin >> maze[i][j];
            if(maze[i][j] == '.') ++numwhite;
        }
    }

    bfs(mp(1, 1));

    if(dist[H][W] != 0){
        ans = numwhite - dist[H][W] - 1;
    }

    cout << ans << endl;
    return 0;
}


