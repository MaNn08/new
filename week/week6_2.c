#include<stdio.h>
int main (){
    int a,b=1,c;
    printf("Input Number : ");
    scanf("%d",&a);
    while(b<=a){
    	int c=1;
        while(c<=b){
            printf("*");
            c++;
            }
        printf("\n");
        b++;
    }
    return 0;
}