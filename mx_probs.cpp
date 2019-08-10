#include<stdio.h>

main(){
	int m,n,im,in,choice,d_eliment;
	printf("Enter the dimention of the matrix(first no of row then no of coloum)\n");
	scanf("%d%d",&m,&n);
	int mx1[m][n],tanspose[m][n];
	printf("input the eliments of the  matrix rowwise\n");
	for(im=0;im<m;im++){
		for(in=0;in<n;in++){
			scanf("%d",&mx1[im][in]);
		}
	}
	printf("Enter '1','2','3'\n");
	printf("1. find the tanspose of the matrix\n2.find the eliments along the diagonal\n3.find the boundary eliments");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(im=0;im<m;im++){
				for(in=0;in<n;in++){
					tanspose[in][im] = mx1[im][in];
				}
			}
			printf("the tanspose is \n");
			for(im=0;im<m;im++){
				for(in=0;in<n;in++){
					printf("%d ",tanspose[im][in]);
				}
				printf("\n");
			}
			break;
		case 2:
			printf("The diagonal eliments are \n");
			for(im=0;im<m;im++){
				for(in=0;in<n;in++){
					if(im==in){
						d_eliment =  mx1[im][in];
						printf("%d ",d_eliment);
					}
				}
			}
			break;
		case 3:
			for(im=0;im<m;im++){
				for(in=0;in<n;in++){
					if(im==0||in==0||im==m-1||in==n-1){
						printf("%d ",mx1[im][in]);
					}
					else{
						printf(" ");
					}
					
				}
				printf("\n");
			}	
			
	}
}
