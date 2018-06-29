#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// B - Stone Monument
int main(){
    int a, b;
    cin >> a >> b;
    
    int pillar[999];
    pillar[0] = 1;
    for (int i=1;i<1000;++i){
        pillar[i] = pillar[i-1] + (i+1);
    }
    int ans=-1;
    for(int i=1;i<=499500;++i){
        for(int j=0;j<999;++j){
            if(i+a == pillar[j] && i+b == pillar[j+1]){
                ans = i;
                break;
            }
        }
        if(ans != -1) break;
    }

    cout << ans << endl;
    return 0;
}


