#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter First number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	printf("Enter Third number : ");
	scanf("%d",&c);
	if((a>b && b>c) || (a<b && b<c))
		d=a+c;
	if((b>a && a>c) || (b<a && a<c))
		d=b+c;
	if((a>c && c>b) || (a<c && c<b))
		d=a+b;
	if((a==b && b>c) || (a==b && b<c))
		d=b+c;
	if((b==c && c>a) || (b==c && c<a))
		d=a+b;
	if((a==c && c>b) || (a==c && c<b))
		d=a+b;
	if((a==b)&&(b==c))
		d=a+b;
	printf("Sum Of Largest And Smallest Number : %d",d);
	return 0;
}