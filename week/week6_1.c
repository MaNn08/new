#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y){
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main (){
    int a,b=1,c,d,y=1;
    printf("Input Number : ");
    scanf("%d",&a);
    c=a;
    for(b=1;b<=a;b++){
    	gotoxy(c-1,y);
    	for(d=1;d<=(b*2)-1;d++){
    		printf("*");
    	}
    	y++;
    	c--;
	}
    return 0;
}