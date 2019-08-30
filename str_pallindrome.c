#include<stdio.h>
#include<string.h>

strpal(char str1[]){
	int i,j=0,len;
	char str[100];
	
	len = strlen(str1);
	for(i=len-1;i>=0;i--){
		str[j++] = str1[i];
	}
	str[j] = '\0';
	puts(str);
	printf("\n");
	puts(str1);
	if(strcmp(str,str1)==0){
		printf("its pallindrome");
	}
	else{
		printf("its not");
	}

}

main(){
	char str1[100];
	
	printf("enter the first sentence \n");
	gets(str1);
	strpal(str1);
	
}
