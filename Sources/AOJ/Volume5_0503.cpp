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
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define repeq(i, a, n) for (int i = a; i <= n; ++i)
#define per(i, a, n) for (int i = n - 1; i >= a; --i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

// Cup
int n, m;

int toC(int A, int B, int C)
{
    if (!A && !B)
        return 0;
    if (C & 1)
        return toC(A >> 1, B >> 1, C >> 1);
    if (B & 1)
        return toC(C >> 1, B >> 1, A >> 1) + toC((A | B | C) >> 1, 0, 0) + 1;
    if (A & 1)
        return toC(A >> 1, B >> 1, C >> 1) + 2 * toC((A | B | C) >> 1, 0, 0) + 2;
    //cerr<<"ERROR"<<endl;
    //return -2;
}

int main()
{
    while (cin >> n >> m, n || m)
    {
        int cup[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            int t;
            cin >> t;
            for (int j = 0; j < t; j++)
            {
                int a;
                cin >> a;
                cup[i] |= 1 << a - 1;
            }
        }
        int a = min(toC(cup[0], cup[1], cup[2]), toC(cup[2], cup[1], cup[0]));
        cout << (a <= m ? a : -1) << endl;
    }
    return 0;
}