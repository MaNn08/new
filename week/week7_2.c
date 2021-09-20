#include<stdio.h>
int a,i,j,s,q;

void upp(){
    for(i = 1; i <= a; i++){
        for(j = 1; j<= i; j++){
           printf(" ");
        }
        for(j = 1; j <= (a-i)+1; j++){
            if(i==a){
            	printf(" ");
			}
			else{
            	printf("*");
			}
        }
        for(j = a-i; j >= 1; j--){
            printf("*");
        }
        if(i==a){
        	for(q=1;q<=a+1;q++){
            	printf("\b");
			}
		}
		else{
            printf("\n");
		}
    }
}

void downn()
{   
    for(i = 1; i <= a; i++){
        s = a-i;
        printf(" ");
        for(j = 1; j <= s; j++ ){
            printf(" ");
        }
        for(j = 1; j <= a-s; j++){
            printf("*", j);
        }
        for(j = a-s-1; j >= 1; j--){
            printf("*", j);
        }
        printf("\n");
    }
}

int main(){
	printf("Input Number : ");
	scanf("%d",&a);
	upp();
	downn();
	return 0;
}