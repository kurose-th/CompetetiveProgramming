#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

// ABC083B - Some Sums
int main(){
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    int i_kari;
    int count=0;
    for(int i=1;i<=N;i++){
        int sum=0;
        i_kari=i;
        for (int j=4;j>=0;j--){
            if(i_kari>=pow(10,j)){
                sum += (int)(i_kari/pow(10, j));
                i_kari -= (int)(i_kari/pow(10, j))*pow(10,j);
            }
        }
        if(sum>=A && sum<=B){
            count+=i;
        }
    }
    printf("%d", count);
    return 0;
}