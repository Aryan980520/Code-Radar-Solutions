#include <stdio.h>

int main() {
    char a[100];
    int b;
    char c[100];

    scanf("%s",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    print("Name: %s\n",a);
    print("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}