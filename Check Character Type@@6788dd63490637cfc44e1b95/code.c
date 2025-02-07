#include <stdio.h>

int main() {

    char a;
    scanf("%d",&a);

    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel");
        break;

        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("Digit");
        break:
        
        default:
            printf("Consonant");
        }
    return 0;

    }

    