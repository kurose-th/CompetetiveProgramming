#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// 
int main(){
    char str[4];
    scanf("%s", str);
    int ans=0;
    rep(i, 0, 4){
        if(str[i] == '+') ++ans;
        if(str[i] == '-') --ans;
    }
    printf("%d", ans);
    return 0;
}


