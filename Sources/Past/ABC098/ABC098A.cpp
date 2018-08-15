#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// A - Add Sub Mul
int main(){
    int A, B;
    cin >> A >> B;
    int calc[3] = {A+B, A-B, A*B};
    int ans=calc[0];
    for(int i=0;i<3;++i){
        if(ans<calc[i]){
            ans = calc[i];
        }
    }
    cout << ans << endl;
    return 0;
}


