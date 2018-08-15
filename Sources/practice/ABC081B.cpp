#include <cstdio>
#include <string>
using namespace std;

// ABC081B - Shift only
int main(){
    int n;
    int divi = 20000;
    int num;
    int count;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &num);
        count=0;
        while(true){
            // 奇数ならループを抜ける
            if(num%2==1){
                if(count<divi){divi=count;}
                break;
            }
            num = num/2;
            count++;
        }
    }
    printf("%d", divi);

    return 0;
}