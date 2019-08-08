#include<stdio.h>

main(){
	int s1,s2,s3;
	printf("Enter the three sides of the triangle");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2 && s2==s3){
		printf("it's an equilateral triangle");
	}
	else if((s1*s1)+(s2*s2)==(s3*s3)||(s3*s3)+(s2*s2)==(s1*s1)||(s1*s1)+(s2*s2)==(s3*s3)){
		printf("its a right angle triangle");
	}
	else{
		printf("it's neither equilataral nor right angle triangle");
	}
}
