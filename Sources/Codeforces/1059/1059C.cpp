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
#include <numeric>
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
int N;
int ans[1001000];

int main(){
    cin >> N;
    int now = 0;
    int tmp = N;
    int wari = (tmp + 1) / 2;
    if(N==3) {
        cout<< "1 1 3"<<endl;
        return 0;
    }
    if(N==1) {
        cout<< "1"<<endl;
        return 0;
    }
    for(int i=0;i<10000;){
        int end = now+wari;
        tmp -= wari;
        for(now;now<end;++now){
            ans[now] = (int)pow(2,i);
        }
        wari = (tmp + 1) / 2;
        ++i;
        if(tmp == 0){
            if((int)pow(2,i-2)==1){
                ans[N-1] = N;
            }else{
                int aaa = N%(int)pow(2,i-2);
                ans[N-1] = N-aaa;
            }
            break;
        }
    }

    rep(i, 0, N){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}


