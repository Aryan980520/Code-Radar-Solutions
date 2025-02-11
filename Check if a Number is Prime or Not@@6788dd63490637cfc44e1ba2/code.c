#include<stdio.h>
int main(){

    int a,r=0;
    scanf("%d",&a);

    if(n<=1){
        r=1;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                r=1;
                break;
            }
        }
    }
    if(r=0){
        printf("Prime");
    }
    else{
        printf("Not Prime"); 
    }
    return 0;
}