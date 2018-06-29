#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// A - Colorful Transceivers
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ans = "No";

    if(abs(a-c)<=d){
        ans = "Yes";
    }else{
        if(abs(a-b) <= d && abs(b-c) <= d){
            ans = "Yes";
        }
    }
    cout << ans << endl;
    return 0;
}


