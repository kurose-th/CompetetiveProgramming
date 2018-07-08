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

// C - 幅優先探索
int R, C;
int sy, sx;
int gy, gx;
char maze[60][60];
int dist[60][60];
int vx[4] = {1, 0, -1, 0};
int vy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
int main(){
    cin >> R >> C >> sy >> sx >> gy >> gx;

    rep(i, 0, 60){
        rep(j, 0, 60){
            dist[i][j] = 0;
        }
    }

    repeq(i, 1, R){
        repeq(j, 1, C){
            cin >> maze[i][j];
        }
    }

    q.push(mp(sy, sx));
    dist[sy][sx] = 0;
    
    while(!q.empty()){
        pair<int, int> tmp = q.front();
        q.pop();
        rep(i, 0, 4){
            int ny = tmp.first + vy[i];
            int nx = tmp.second + vx[i]; 
            if(maze[ny][nx] == '.' && dist[ny][nx] == 0){
                q.push(mp(ny, nx));
                dist[ny][nx] = dist[tmp.first][tmp.second] + 1;
            }
        }
    }

    cout << dist[gy][gx] << endl;
    return 0;
}


