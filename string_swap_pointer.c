
#include<stdio.h>
#include<stdlib.h>
strswap(char *str1,char *str2){
	char *str;
	str = str1;
	str1 = str2;
	str2 = str;
	puts(str1);
	puts(str2);

}

main(){
	char str1[100],str2[100];
	
	printf("enter the first sentence");
	gets(str1);
	printf("enter the secod sentence");
	gets(str2);
	strswap(&str1,&str2);
	
}
