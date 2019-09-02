
#include<stdio.h>
#include<stdlib.h>
strswap(char str1[],char str2[]){
	int i;
	char str[100];
	for(i=0;i<=100;i++){
		str[i] = str1[i];
		str1[i] = str2[i];
		str2[i] = str[i];
	}
	puts(str1);
	puts(str2);

}

main(){
	char str1[100],str2[100];
	
	printf("enter the first sentence");
	gets(str1);
	printf("enter the secod sentence");
	gets(str2);
	strswap(str1,str2);
	
}
