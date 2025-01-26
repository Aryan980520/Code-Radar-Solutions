#include <stdio.h>

int main() {
    char a[100];
    int b;
    char c[100];

    scanf("%99s %d %99s",&a,&b,&c);

    print("Name: %s\n",a);
    print("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}