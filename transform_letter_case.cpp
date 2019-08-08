#include<stdio.h>

main(){
	char ch,op;
	
	printf("enter a small-letter charecter\n");
	scanf("%c",&ch);
	if (ch>=97 && ch<=122){
		ch = ch-32;
	}
	else if(ch>=65 && ch<=90){
		ch = ch+32;
	}
	printf("the transformed charecter is %c",ch);
	
}
