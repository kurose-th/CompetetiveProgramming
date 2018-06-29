#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

// ABC088B - Card Game for Two
int main(){
    int N;
    scanf("%d", &N);
    int array[100];
    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
    }

    int tmp;
    // sort
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(array[i]<array[j]){
                tmp = array[i];
                array[i]=array[j];
                array[j]=tmp;    
            }
        }
    }
    int alice=0, bob=0;
    for(int i=0;i<N;i++){
        if(i%2==0){
            alice+=array[i];
        }else{
            bob+=array[i];
            }
    }
    printf("%d", alice-bob);
    return 0;
}