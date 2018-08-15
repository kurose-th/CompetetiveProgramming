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
    int N, K;
    cin >> N >> K;
    vector<int> A;

    int num;
    rep(i, 0, N){
        cin >> num;
        A.push_back(num);
    }

    int min_index = distance(A.begin(), min_element(A.begin(), A.end()));

    int ind_up=min_index;
    int ind_down=min_index;
    int ans = 0;
    if(N==K){
        ans=1;
    }else{
        int nm = N-1;
        int km = K-1;
        ans = (nm + (km-1))/(km);
    }
    cout << ans << endl;
    return 0;
}


