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

// A - Day of Takahashi
int main(){
    int a, b;
    cin >> a >> b;
    int ans=a-1;
    for (int i=1;i<=a;++i){
        if(i==a && i<=b){++ans;}
    }
    cout << ans << endl;
    return 0;
}


