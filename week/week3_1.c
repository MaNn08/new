#include<stdio.h>
int main(){
	int a,b,c,d;	
	printf("Enter First number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	printf("Enter Third number : ");
	scanf("%d",&c);
	if(a>b)
		if(b>c){
			printf("The Biggest number is ; %d\n",a);
			printf("The Smallest number is ; %d",c);
		}
		else if((b<c && c<a)|| b==c){
			printf("The Biggest number is ; %d\n",a);
			printf("The Smallest number is ; %d",b);
		}
		else if(c>a){
			printf("The Biggest number is ; %d\n",c);
			printf("The Smallest number is ; %d",b);
		}
	if(b>c)
		if(c>a){
			printf("The Biggest number is ; %d\n",b);
			printf("The Smallest number is ; %d",a);
		}
		else if((c<a && a<b)|| a==c){
			printf("The Biggest number is ; %d\n",b);
			printf("The Smallest number is ; %d",c);
		}
	if(c>a)
		if((a<b && b<c)|| a==b){
			printf("The Biggest number is ; %d\n",c);
			printf("The Smallest number is ; %d",a);
		}
	if(a==b==c)	
		printf("No Biggest And Smallest Number");
	return 0;
}