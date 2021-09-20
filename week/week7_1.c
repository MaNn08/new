#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y){
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main (){
    int a,b,c2,c3,x=0,y=1,y2,y3;
    printf("Input Number : ");
    scanf("%d",&a);
    for(b=1;b<=(a*2)-1;b++){
    	gotoxy(x,y);
    	printf(" ");
    	if(y==a){
    		printf("*");
    		x--;
    	}
    	if(y<a){
    		y2=y;
    		for(c2=1;c2<=(a*2)-((2*y2)-1);c2++){
    				printf("*");
    		}
    		x++;
    	}
    	if(y>a){
    		y3=y;
    		y3=y3-a;
    		for(c3=1;c3<=(y3*2)+1;c3++){
    			printf("*");
    		}
    		x--;
    	}
    	y++;
	}
    return 0;
}