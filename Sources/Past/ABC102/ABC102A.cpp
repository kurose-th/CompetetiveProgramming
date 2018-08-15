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

// A - Multiple of 2 and N
int main(){
    int N;
    cin >> N;
    int ans=0;
    if(N%2==0){
        ans=N;
    }else{
        ans=N*2;
    }

    cout << ans << endl;
    return 0;
}


