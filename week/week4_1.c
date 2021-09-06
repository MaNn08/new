#include<stdio.h>
int main(){
	int a,b,c,d,e,g,h;	
	printf("Enter Three Number : ");
	scanf("%d %d %d",&a,&b,&c);
	d=a+b+c;
	e=d-a;
	g=d-b;
	h=d-c;
	if(e>g && e>=h){
		printf("%d + %d = %d",b,c,e);
	}
	else if(g>h && g>=e){
		printf("%d + %d = %d",a,c,g);
	}
	else if(h>g){
		printf("%d + %d = %d",a,b,h);
	}
	else{
		printf("%d + %d = %d",a,b,h);
	}
    return 0;
}