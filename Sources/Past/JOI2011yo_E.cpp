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

// E - チーズ (Cheese)
int H, W, N;
char maze[1010][1010];
queue<pair<int, int>> q;
int dist[1010][1010];
pair<int, int> sg[15];
int vx[4] = {1, 0, -1, 0};
int vy[4] = {0, 1, 0, -1};
int ans = 0;

void bfs(int now){
    rep(i, 0, H){
        rep(j, 0, W){
            dist[i][j] = 0;
        }
    }
    while(!q.empty()){
        pair<int, int> tmp = q.front();
        q.pop();
        rep(i, 0, 4){
            int nx = tmp.first + vx[i];
            int ny = tmp.second + vy[i]; 
            if(maze[nx][ny] != 'X' && ny>=0 && nx>=0 && ny<W && nx<H && dist[nx][ny] == 0){
                q.push(mp(nx, ny));
                dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
            }
        }
    }
    ans += dist[sg[now+1].first][sg[now+1].second];
}

int main(){
    cin >> H >> W >> N;
    rep(i, 0, H){
        rep(j, 0, W){
            char t;
            cin >> t;
            maze[i][j] = t;
            if(t == 'S'){
                sg[0] = mp(i, j);
            }
            if(isdigit(t)){
                int n = t - '0';
                sg[n] = mp(i, j);
            }
        }
    }

    rep(i, 0, N){
        q.push(sg[i]);
        bfs(i);
    }

    cout << ans << endl;
    return 0;
}


