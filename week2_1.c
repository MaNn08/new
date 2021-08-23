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
	if(a>b)
		if(b>c)
			d=a+c;
		else
			d=a+b;
	if(b>c)
		if(c>a)
			d=b+a;
		else
			d=b+c;
	if(c>a)
		if(a>b)
			d=c+b;
		else
			d=c+a;
	else
		d=a+b;
	printf("Sum Of Largest And Smallest Number : %d",d);
    return 0;
}