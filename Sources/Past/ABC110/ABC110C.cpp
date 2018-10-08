    #include <cstdio>
    #include <string>
    #include <cmath>
    #include <string>
    #include <algorithm>
    #include <iostream>
    #include <map>
    #include <vector>
    #include <iomanip>
    #include <tuple>
    #include <queue>
    #include <numeric>
    using namespace std;
    typedef long long ll;
    #define rep(i, a, n) for (int i=a;i<n;++i)
    #define repeq(i, a, n) for(int i=a;i<=n;++i)
    #define repi(m, itr) for (auto itr = m.begin();itr != m.end();++itr)
    #define per(i, a, n) for (int i=n-1; i>=a;--i)
    #define pb push_back
    #define mp make_pair
    #define all(x) (x).begin(), (x).end()

    // C - String Transformation
    string S, T;
    string ans = "Yes";
    int s[26], t[26];

    int main(){
        cin >> S >> T;
        
        rep(i, 0, 26){
            s[i] = t[i] = -1;
        }

        rep(i, 0, S.size()){
            int s_tmp = S[i] - 'a';
            int t_tmp = T[i] - 'a';
            if(s[s_tmp] != -1 || t[t_tmp] != -1){
                if(s[s_tmp] != t_tmp || t[t_tmp] != s_tmp){
                    cout << "No" << endl;
                    return 0;
                }
            }else{
                s[s_tmp] = t_tmp;
                t[t_tmp] = s_tmp;
            }
        }

        cout << ans << endl;
        return 0;
    }


