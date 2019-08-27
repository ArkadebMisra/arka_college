#include<stdio.h>
static int n=100;
mx_add(int mx1[][n],int mx2[][n],int m,int n){
	int mxAns[m][n],im,in;
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			mxAns[im][in] = mx1[im][in] + mx2[im][in];
		}
	}
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			printf("%d",mxAns[im][in]);
		printf("\n");
		}
		printf("\n");
	}
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
	printf("input the eliments of the secondmatrix row-wise\n");
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			scanf("%d",&mx2[im][in]);
		}
	}
	
	mx_add(mx1,mx2,m,n);
}
