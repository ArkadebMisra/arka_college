#include<stdlib.h>
#include<stdio.h>
#include<string.h>

short_name(char f_name[],char m_name[],char l_name[]){
	int i;
	printf("%c ",f_name[0]);
	printf("%c ",m_name[0]);
	puts(l_name);
}

main(){
	char f_name[200],m_name[100],l_name[100];
	int i;
	
	printf("Enter your first name \n");
	gets(f_name);
	printf("Enter your middle name \n");
	gets(m_name);
	printf("Enter your last name \n");
	gets(l_name);
	short_name(f_name,m_name,l_name);
}
