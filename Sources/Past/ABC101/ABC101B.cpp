#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i=a;i<n;++i)
#define per(i, a, n) for (int i=n-1; i>=a;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// 
int main(){
    int N;
    cin >> N;

    int n=N;
    int sum=0;
    int dig;
    while(n){
        dig = n%10;
        sum += dig;
        n /= 10;
    }
    string ans;
    if(N%sum==0){
        ans="Yes"; 
    }else{
        ans="No";
    }
    cout << ans << endl;
    return 0;
}


