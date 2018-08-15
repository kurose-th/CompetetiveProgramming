#include <cstdio>
#include <string>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) { }
  bool unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};


// D - Equals
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> P(N);
    UnionFind uf(N);

    for(int i=0;i<N;++i){
        cin >> P[i];
        --P[i];
    }    

    vector<int> X(M), Y(M);
    for(int i=0;i<M;++i){
        cin >> X[i] >> Y[i];
        --X[i];
        --Y[i];
        uf.unionSet(X[i], Y[i]);
    }

    int ans=0;
    for(int i=0;i<N;++i){
        if(uf.findSet(i, P[i])) ++ans;
    }
    cout << ans << endl;
    
    return 0;
}


