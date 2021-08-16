#include <stdio.h>
int main() {
    int a,b,c,d,e,i=2 ;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Enter Third Number : ");
    scanf("%d", &c);
    printf("Enter Fourth Number : ");
    scanf("%d", &d);
	a=(a+1)%i;
	b=(b+1)%i;
	c=(c+1)%i;
	d=(d+1)%i;
	e=a+b+c+d;
    printf("How Many Even Numbers There Are : %d",e);
    return 0;
}