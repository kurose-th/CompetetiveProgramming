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

// C - Train Ticket
int main(){
    string S;
    cin >> S;

    int num[4];
    rep(i, 0, 4){
        num[i] = stoi(S.substr(i, 1));
    }
    int L = 3;
    char op[3];
    for(int i=0;i<1<<L;++i){
        int r;
        int tmp = num[0];
        int ans_b;
        for(r=0;r<L;++r){
            // Bitが立っているときの処理
            if((i & (1 << r)) != 0){
                tmp = tmp + num[r+1];
            }else{
                tmp = tmp - num[r+1];
            }
        }
        if(tmp == 7){
            rep(j, 0, L){
                op[j] = ((i & (1 << j)) != 0) ? '+' : '-';
            }
            break;
        }
    }
    
    int ans = 0;
    printf("%d%c%d%c%d%c%d=7\n", num[0], op[0], num[1], op[1], num[2], op[2], num[3]);
    return 0;
}


