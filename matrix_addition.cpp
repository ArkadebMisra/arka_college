#include<stdio.h>

main(){
	int m,n,nth=1,ni=0,mi=0;
	
	printf("enter the dimention of the matrix\n");
	scanf("%d%d",&m,&n);
	
	int mx1[m][n],mx2[m][n];
	
	for(ni=0;ni<n;ni++){
		printf("enter the eliments row wise\n");
		for(mi=0;mi<m;mi++){
			scanf("%d",&mx1[ni][mi]);
		}
	}
	
}
