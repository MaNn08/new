#include<stdio.h>
int main(){
	int s,sav=0,m,n,last[99],save[99],num[99];
	printf("Input Num : ");
	scanf("%d",&n);
	for(int k=1;k<=n*n;k++){
		scanf("%d",&num[k]);
	}
	m=(n*(n*n+1))/2;
	for(int k=0;k<=n-1;k++){
		int sav=0;
		for(int i=1;i<=n*n;i++){
			if(i%n==k){
				sav=sav+num[i];
				save[k]=sav;
			}
		}
	}
	for(int k=n;k<=n+n-1;k++){
		for(int l=1;l<=n*n;l++){	
			sav=sav+num[l];
			save[k]=sav;
				if(l%n==0){
					k++;
					sav=0;
				}	
		}
	}
	for(int k=n+n;k<=n+n;k++){
		int l=1,sav=0;
		while(l<=n*n){
			sav=sav+num[l];
			save[k]=sav;
			l=l+n+1;
		}
	}
	for(int k=n+n+1;k<=n+n+1;k++){
		int l=n,sav=0;
		while(l<n*n){
			sav=sav+num[l];
			save[k]=sav;
			l=l+n-1;
		}
	}
	for(int k=0;k<=n+n+1;k++){
		if(m!=save[k]){
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