#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// A - Cats and Dogs
int main(){
    int A, B, X;
    cin >> A >> B >> X;
    
    string ans = "YES";
    if(X-A<0 || X-A>B) ans ="NO";
    cout << ans << endl;
    return 0;
}


