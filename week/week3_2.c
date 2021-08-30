#include<stdio.h>
int main(){
	int a,num,max=0,min=9999999;
    for(a=1;a<=3;a++)
    {
        printf("Enter Number : ",a);
        scanf("%d",&num);
        if(max < num)   max=num;
        if(num < min)   min=num;
    }
    if(max==min){
    	printf("No Biggest And Smallest Number");
    }
    else if(max!=min){
    	printf("The Biggest  Number is : %d \n",max);
    	printf("The Smallest Number is : %d \n",min);
    }
    return 0;
}