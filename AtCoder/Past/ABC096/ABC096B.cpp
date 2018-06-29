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

// B - Maximum Sum
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int K;
    cin >> K;
    for(int i=0;i<K;++i){
        if(A>=B && A>=C){
            A*=2;
        }else if(B>=A && B>=C){
            B*=2;
        }else{
            C*=2;
        }
    }
    int ans = A + B + C;
    cout << ans << endl;
    return 0;
}


