#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

// ABC085C - Otoshidama
int main(){
    int N, Y;
    scanf("%d %d", &N, &Y);
    int ans[3] = {-1, -1, -1};
    for(int a=0;a<=N;a++){
        for(int b=0;(a+b)<=N;b++){
            int c= N - a - b;
            if(10000*a+5000*b+1000*c==Y){
                ans[0]=a;
                ans[1]=b;
                ans[2]=c;
                break;
            }
        }
    }
    printf("%d %d %d", ans[0], ans[1], ans[2]);
    return 0;
}