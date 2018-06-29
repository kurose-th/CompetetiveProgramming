#include <cstdio>
#include <string>
using namespace std;

// ABC086A - Product
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    string ans;
    if((a*b)%2 == 0){
        ans = "Even";
    }else{
        ans = "Odd";
    }
    printf("%s\n", ans.c_str());
    return 0;
}