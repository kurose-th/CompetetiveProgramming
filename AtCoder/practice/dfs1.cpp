#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool dfs(int pos, int rest, char board[8][8]);
bool ok(int y, int x);
bool isPuttable(int y, int x, char board[8][8]);

bool dfs(int pos, int rest, char board[8][8]){
    if(rest==0){
        return true;
    }
    if(pos==64){
        return false;
    }
    int y = pos/8;
    int x = pos%8;
    if(board[y][x] == 'Q'){
        if(isPuttable(y, x, board)){
            if(dfs(pos+1, rest-1, board)){
                return true;
            }
        }
    }else{
        if(isPuttable(y, x, board)){
            board[y][x] = 'Q';
            if(dfs(pos+1, rest-1, board)){
                return true;
            }
            board[y][x] = '.';
        }
        if(dfs(pos+1, rest, board)){
            return true;
        }
    }
    return false;
}

// 8x8の盤の中か
bool ok(int y, int x){
    return (y>=0 && x>=0 && y<8 && x<8);
}

bool isPuttable(int y, int x, char board[8][8]){
    for(int vy=-1;vy<=1;++vy){
        for(int vx=-1;vx<=1;++vx){
            if(vy == 0 && vx == 0){
                continue;
            }
            int ty = y;
            int tx = x;
            while(true){
                ty += vy;
                tx += vx;
                if(!ok(ty, tx)){
                    break;
                }
                if(board[ty][tx] == 'Q'){
                    return false;
                }
            }
        }
    }

    return true;
}

// 深さ優先探索の練習
// C - パズルのお手伝い
int main(){
    char board[8][8];
    
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cin >> board[i][j];
        }
    }

    if(dfs(0, 8, board)){
        for(int i=0;i<8;++i){
            string ansc;
            for(int j=0;j<8;++j){
                ansc += board[i][j];    
            }
            cout << ansc << endl;
        }
    }else{
        cout << "No Answer" << endl;
    }
    return 0;
}


