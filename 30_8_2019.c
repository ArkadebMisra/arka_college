#include<stdio.h>
#include<stdlib.h>
#include<string.h>

adress(char *str1){
	char ch=str1;
	int i=0;
	while(ch !='\0')
	{
		ch = *(str1+i);
		printf("the adress of %c is %u\n",ch,str1);
		i++;
		
	}
}

main(){
	char str1[100];
	int choise;
	
	printf("Enter your choise(1, 2, 3, or 4)\n");
	printf("1. Show adress of each charecter\n");
	printf("2. Joine two strings\n");
	printf("3. Compare two strings\n");
	printf("4. Calculate length of the string\n");
	scanf("%d",&choise);
	getchar();
	switch(choise)
		case 1:
			printf("enter a string\n");
			gets(str1);
			adress(&str1);
			
	
}
