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

// A - Happy Birthday!
int main(){
    int A, B;
    cin >> A >> B;
    
    string ans;
    if(A>8 || B>8){
        ans = ":(";
    }else{
        ans = "Yay!";
    }
    cout << ans << endl;
    return 0;
}


