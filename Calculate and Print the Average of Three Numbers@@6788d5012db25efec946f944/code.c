#include <stdio.h>


int main() {
    float a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum = a + b + c;
    float avg;
    avg = sum/3;
    printf("Average: %.2f",avg);
    return 0;
}