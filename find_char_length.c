#include<stdio.h>

main(){
	char ck,arr[50];
	int len=0;
	
	printf("Enter your name ");
	scanf("%s",&arr);
	ck = arr[0];
	while(ck != '\0'){
		len++;
		ck = arr[len];
		
	}
	printf("%d",len);
}
