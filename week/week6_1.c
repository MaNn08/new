#include<stdio.h>
int main (){
    int a,b,c,d;
    printf("Input Number : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        for(c=1;c<=a;c++){
			if(c<=b){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
