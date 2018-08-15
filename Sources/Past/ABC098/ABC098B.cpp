#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

// B - Cut and Count
int main(){
    map<char, bool> bucket;
    int N;
    string S;

    cin >> N >> S;
    int ans = 0;
    for(int i=0;i<N;++i){
        int tmp_ans = 0;
        bucket.erase(bucket.begin(), bucket.end());
        // left side
        for(int j=0;j<i;++j){
            bucket.insert(make_pair(S[j], true));
        }
        // compare to right side
        for(int k=i;k<N;++k){
            if(bucket.find(S[k]) != bucket.end() && bucket[S[k]]){
                tmp_ans++;
                bucket[S[k]] = false;
            }
        }
        if(tmp_ans>ans){
            ans = tmp_ans;
        }
    }
        cout << ans << endl;
    return 0;
}


