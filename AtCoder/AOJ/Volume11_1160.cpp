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


int W, H;
int islands[110][110];
bool reached[110][110];

void dfs(int x, int y){
    if(x<0 || y<0 || x >= H || y >= W || islands[x][y] == 0) return;
    if(reached[x][y]) return;
    reached[x][y] = true;

    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
    dfs(x-1, y-1);
    dfs(x-1, y+1);
    dfs(x+1, y+1);
    dfs(x+1, y-1);
}

// How Many Islands?
int main(){
    while(true){
        cin >> W >> H;
        if(H == 0 && W == 0) break;

        rep(i, 0, 110){
            rep(j, 0, 110){
                reached[i][j] = false;
            }
        }
        int tans = 0;
        rep(i, 0, H){
            rep(j, 0, W){
                cin >> islands[i][j];
            }
        }
        rep(i, 0, H){
            rep(j, 0, W){
                if(islands[i][j] == 1 && reached[i][j] != true){
                    ++tans;
                    dfs(i, j);
                }
            }
        }
        cout << tans <<endl;
    }
    return 0;
}


