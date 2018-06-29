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

// Insertion Sort
int main(){
    int N;
    cin >> N;
    vector<int> A;
    rep(i, 0, N){
        int src = 0;
        cin >> src;
        A.pb(src);
    }

    rep(i, 0, N){
        if(i > 0) cout << " ";
        cout << A[i];
    }
    cout <<endl;

    rep(i, 1, N){
        int v = A[i];
        int j = i - 1;
        while(j>=0 && A[j]>v){
            A[j+1] = A[j];
            --j;
        }
        A[j+1] = v;
        rep(i, 0, N){
            if(i > 0) cout << " ";
            cout << A[i];
        }
        cout <<endl;
    }

    return 0;
}

