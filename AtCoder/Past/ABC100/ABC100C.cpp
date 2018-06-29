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

// C - *3 or /2
int main(){
    int N;
    cin >> N;
    int A[11000];
    for(int i=0;i<N;++i){
        cin >> A[i];
    }
    int ans=0;
    for(int i=0;i<N;++i){
        int tmp = A[i];
        for(int j=0;j<1000;++j){
            if(tmp%2 == 1) break;
            tmp = tmp/2;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}


