#include<stdio.h>
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
	if(a%i==0)
		a=1;
	else
		a=0;
	if(b%i==0)
		b=1;
	else
		b=0;
	if(c%i==0)
		c=1;
	else
		c=0;
	if(d%i==0)
		d=1;
	else
		d=0;
	e=a+b+c+d ;
    printf("How Many Even Numbers There Are : %d",e);
    return 0;
}