#include <stdio.h>

int main() {
    char a[100];
    int b;
    char c[100];

    scanf("%97s",&a);
    scanf("%d",&b);
    scanf("%99s"&c);

    print("Name: %s",a);
    print("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}