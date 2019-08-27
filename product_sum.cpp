#include<stdio.h>  
main()    
{    
int n,sum=0,m,prd=1;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;
prd=prd*m;
n=n/10;    
}    
printf("Sum is=%d \n",sum);
printf("product is=%d",prd);  
}  
