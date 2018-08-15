#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// A - ABD
int main(){
    int N;
    cin >> N;
    
    string ans;
    if(N<=999){
        ans = "ABC";
    }else{
        ans = "ABD";
    }

    cout << ans << endl;
    return 0;
}


