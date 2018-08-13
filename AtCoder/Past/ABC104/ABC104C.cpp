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
typedef long long ll;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define repeq(i, a, n) for(int i=a;i<=n;++i)
#define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// 
int D, G;
vector<int> perm;
vector<int> p;
vector<int> c;
int ans = 100000000;

int main(){
    cin >> D >> G;
    rep(i, 0, D){
        int tmp;
        cin >> tmp;
        p.push_back(tmp);
        cin >> tmp;
        c.push_back(tmp);
    }

    rep(i, 0, D){
        perm.push_back(i);
    }

    do{
        int goal = G;
        int tmpans = 0;
        rep(i, 0, D){
            int comp = p[perm[i]]*100*(perm[i]+1) + c[perm[i]];
            if(goal>comp){
                goal -= comp;
                tmpans += p[perm[i]];
                continue;
            }else if(goal == comp){
                tmpans += p[perm[i]];
                break;
            }else{
                if(goal < (comp-c[perm[i]])){
                    tmpans += (goal+100*(perm[i]+1) - 1) / (100*(perm[i]+1));
                }else{
                    tmpans += p[perm[i]];
                }
                break;
            }
        }
        ans = min(tmpans, ans);
    }while(next_permutation(all(perm)));

    cout << ans << endl;
    return 0;
}


