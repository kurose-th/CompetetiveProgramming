#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

// ABC085B - Kagami Mochi
int main(){
    int N;
    scanf("%d", &N);
    int array[100];
    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
    }
    sort(array, array+N, greater<int>());
    int base=array[0];
    int count=1;
    for(int i=0;i<N;i++){
        if(base>array[i]){
            count++;
            base=array[i];
        }
    }
    printf("%d", count);

    return 0;
}