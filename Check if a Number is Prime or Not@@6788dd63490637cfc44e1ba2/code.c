#include<stdio.h>
int main(){

    int a,r=0;
    scanf("%d",&a);

    if(a<=1){
        r=1;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                r=1;
                break;
            }
        }
    }
    if(r==0){
        printf("Prime");
    }
    else{
        printf("Not Prime"); 
    }
    return 0;
}