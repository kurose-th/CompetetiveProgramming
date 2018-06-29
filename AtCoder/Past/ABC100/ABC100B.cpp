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

// B - Ringo's Favorite Numbers
int main(){
    int D, N;
    cin >> D >> N;
    
    int ans = N * pow((double)100, (double)D);
    if(N == 100) ans = (N+1) * pow((double)100, (double)D);
    cout << ans << endl;
    return 0;
}


