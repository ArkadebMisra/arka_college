#include<stdio.h>
display(int *mx,int m,int n){
	int i,j,sum=0;
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+(*((mx+i*m)+j));
			printf("%d ",*(mx+i*m)+j);
		}
		printf("\n");
	}
	printf("sum= %d",sum);
}

main(){
	int m,n,im,in;
	printf("Enter the dimention of the matrix(first no of row then no of coloum)\n");
	scanf("%d%d",&m,&n);
	int mx1[m][n],mx2[m][n];
	printf("input the eliments of the first matrix rowwise\n");
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			scanf("%d",&mx1[im][in]);
		}
	}
	display(&mx1[0][0],m,n);
}
