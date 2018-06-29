#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

// C - Strange Bank
int main(){
    int N;
    cin >> N;
    
    int pattern[12] = {1, 6, 36, 216, 1296, 7776, 46656, 9, 81, 729, 6561, 59049};

    queue<int> q;
    q.push(0);
    map<int, int> map={};
    map.insert(make_pair(0, 0));
    int ans;
    while(!q.empty() && (map.count(N) == 0)){
        int now = q.front();
        q.pop();
        for(int i=0;i<12; ++i){
            int next = now + pattern[i];
            if((map.count(next) == 1) || next>N) continue;
            q.push(next);
            map.insert(make_pair(next, map[now]+1));
        }
    }
    ans = map[N];
    cout << ans << endl;
    return 0;
}


