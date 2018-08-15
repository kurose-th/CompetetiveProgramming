#include <cstdio>
#include <string>
using namespace std;

// ABC081A - Placing Marbles
int main(){
    char str[3];
    scanf("%s", str);
    int a, b, c;
    a = str[0] - '0';
    b = str[1] - '0';
    c = str[2] - '0';
    printf("%d", a+b+c);
    return 0;
}