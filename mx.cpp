
#include<stdio.h>

main(){
	int m,n,im,in,ir,sum=0;
	printf("Enter the dimention of the matrix(first no of row then no of coloum)\n");
	scanf("%d%d",&m,&n);
	int mx1[m][n],mx2[m][n],mxAns[m][n],mxMul[m][n];
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
	
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			mxAns[im][in] = mx1[im][in] + mx2[im][in];
		}
	}
	printf("the addition is \n");
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			printf("%d ",mxAns[im][in]);
		}
		printf("\n");
	}
	
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			for(ir=0;ir<m;ir++){
				sum = sum + mx1[im][ir]*mx2[ir][in];
			}
			mxMul[im][in] = sum;
        	sum = 0;
		}
	}
	
	printf("the multiplication is \n");
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			printf("%d ",mxMul[im][in]);
		}
		printf("\n");
	}
}
