#include<stdio.h>
int main(){
	int a,num,max=0,min=9999999;
    for(a=1;a<=3;a++)
    {
        printf("Enter Number : ",i);
        scanf("%d",&num);
        if(max < num)   max=num;
        if(num < min)   min=num;
    }
    printf("The Biggest Number is  : %d \n",max);
    printf("The Smallest Number is : %d \n",min);
    return 0;
}