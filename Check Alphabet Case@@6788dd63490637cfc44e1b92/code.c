#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if (ch>=1 && ch<=9){
        printf("Not an alphabet");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}