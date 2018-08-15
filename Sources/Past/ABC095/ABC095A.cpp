#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// A - Something on It
int main(){
    char S[3];
    cin >> S;
    
    int ans=700;
    for(int i=0;i<=2;++i){
        if(S[i] == 'o') ans+= 100;
    }
    cout << ans << endl;
    return 0;
}


