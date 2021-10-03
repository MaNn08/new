#include<stdio.h>
int main(){
	int i1=1,i=1,j1=1,j=1,n,sav[99],num[99][99],savelast,s=0 ;
	printf("Input Num : ");
	scanf("%d",&n);
	for(int k=1;k<=n*n;k++){
		scanf("%d",&num[i][j]);
		j++;
		if(k%n==0){
			i++;
			j=1;
		}
	}
	for(int k=1;k<=n;k++){
		int save=0;
		for(int j=1;j<=n;j++){
			save=save+num[i1][j];
			sav[k]=save;
		}
		i1++;
	}
	for(int k=n+1;k<=n+n;k++){
		int save=0;
		for(int i=1;i<=n;i++){
			save=save+num[i][j1];
			sav[k]=save;
		}
		j1++;
	}
	for(int k=n+n+1;k<=n+n+1;k++){
		int save=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					save=save+num[i][j];
					sav[k]=save;
				}
			}
		}
	}
	for(int k=n+n+2;k<=n+n+2;k++){
		int save=0,j=n;
		for(int i=1;i<=n;i++){
			save=save+num[i][j];
			sav[k]=save;
			j--;
		}
	}
	savelast=sav[1];
	for(int k=1;k<=n+n+2;k++){
		if(savelast!=sav[k]){
			s=s+1;
		}
	}
	if(s==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}