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
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// B - 視程の通報
int main(){
    int m;
    cin >> m;

    int ans=0;
    if(m<100){
        ans = 0;
    }else if(m>=100 && m<=5000){
        ans = m*10;
    }else if(m>=6000 && m<=30000){
        ans = m + 50000;
    }else if(m>=35000 && m<=70000){
        ans = 80000 + (m-30000)/5;
    }else if(m>70000){
        ans=89000;
    }
    cout << setfill('0') << setw(2) << right << ans/1000 << endl;
    return 0;
}


