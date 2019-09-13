#include<stdio.h>

main(){
	int y,x,z,m,i;
	int s=0;
	
	printf("Enter the range of numbers");
	scanf("%d%d",&x,&z);
	
	for (i=x;i<=z;i++){
		y=i;
		while(y!=0)
		{
			m=y%10;
			s=s*10+m;
			y=y/10;
		}
		//printf("%d %d\n",s,i);
		if(s==i)
			printf("%d is palindrome number\n",i);
		s = 0;
	
	}

	
}
