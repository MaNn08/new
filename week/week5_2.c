#include<stdio.h>
int main(){
	int a,b=1;	
	printf("Enter Number : ");
	scanf("%d",&a);
	while(b<=a){
		int c=1;
		while(c<=a){
			printf("*");
			c++;
		}
		printf("\n");
		b++;
	}
	return 0;
}