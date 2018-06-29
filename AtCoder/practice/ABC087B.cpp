#include <cstdio>
#include <string>
using namespace std;

// ABC087B - Coins
int main(){
    int max_500, max_100, max_50;
    int x;
    scanf("%d", &max_500);
    scanf("%d", &max_100);
    scanf("%d", &max_50);
    scanf("%d", &x);
    
    int count=0;
    for(int i=0;i<=max_500;i++){
        for(int j=0;j<=max_100;j++){
            for(int k=0;k<=max_50;k++){
                if(500*i+100*j+50*k == x){
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}