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

// 
int main(){
    int a, b;
    cin >> a >> b;

    char ans;
    if(a+b == 15){
        ans = '+';
    }else if(a*b == 15){
        ans = '*';
    }else{
        ans = 'x';
    }
    cout << ans << endl;
    return 0;
}


