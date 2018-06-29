#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// B - Bitter Alchemy
int main(){
    int N, X;
    cin >> N >> X;
    
    int ans = 0;
    int powder = X;
    vector<int> donut;
    for (int i=0;i<N;++i){
        int m;
        cin >> m;
        donut.push_back(m);
        powder -= m;
        ++ans;
    }

    int min = *min_element(donut.begin(), donut.end());
    ans += (powder/min);

    cout << ans << endl;
    return 0;
}


