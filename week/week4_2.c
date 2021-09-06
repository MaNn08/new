#include<stdio.h>
int main(){
	int a,b,c,d;	
	printf("Enter Three number : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && c<a)
		if(b>c || b==c){
			d=a+b;
			printf("%d + %d = %d",a,b,d);
		}
		else if((b<c)){
			d=a+c;
			printf("%d + %d = %d",a,c,d);
		}
	if(b>c && a<b)
		if(c>a || c==a){
			d=b+c;
			printf("%d + %d = %d",b,c,d);
		}
		else if(c<a){
			d=b+a;
			printf("%d + %d = %d",a,b,d);
		}
	if(c>a && b<c)
		if(a>b || a==b){
			d=c+a;
			printf("%d + %d = %d",c,a,d);
		}
		else if(a<b){
			d=c+b;
			printf("%d + %d = %d",c,b,d);
		}
	if(a==b==c)
		printf("%d + %d = %d",a,b,d);
	return 0;
}