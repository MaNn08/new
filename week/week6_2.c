#include<stdio.h>
int main (){
    int a,b,c,d,e;
    printf("Input Number : ");
    scanf("%d",&a);
    e=a;
    for(b=1;b<=a;b++){
		for(c=e;c>=2;c--){
    		printf(" ");
    	}
    	for(d=1;d<=(b*2)-1;d++){
    		printf("*");
    	}
    	printf("\n");
    	e--;
	}
    return 0;
}