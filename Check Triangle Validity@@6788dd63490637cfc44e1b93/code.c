#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if (a>2&&b>a&&c>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}