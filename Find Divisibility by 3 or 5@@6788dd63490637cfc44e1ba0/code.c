#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    if (a%3 && a%6){
        printf("Divisible by both");
    }
    else if (a%3){
        printf("Divisible by 3");
    }
    else if (a%5){
        printf("Divisible by 5");
    }

    return 0;
}