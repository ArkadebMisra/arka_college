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

concat(char *c1, char *c2){
	int i,j;
	i = strlen(c1);
	for(j=0;*(c2+j)!='\0';j++){
		*(c1+i+j) = *(c2+j);
	}
	*(c1+i+j) = '\0';
	puts(c1);
}

compare(char c1[100], char c2[100]){
	int i,j,k,return_val;
	for(i=0;i<=100;i++){
		if(c1[i]=='\0'||c2[i]=='\0'){
			break;
		}
		else{
			j=c1[i];
			k=c2[i];
			return_val = j-k;
		}

	}
	if(return_val==0){
		printf("Its same\n");
	}
	else{
		printf("its not same");
	}
}

findLen(char *str1){
	int len=0;
	char a=str1;
	while(a!='\0'){
		len++;
		a = *(str1+len);
	}
	printf("the length of the string : %d\n",len);
}

uppercase(char *str1){
	int i=0;
	char ch = *str1;
	while(ch != '\0'){
		ch = *(str1+i);
		if(ch>=97 && ch<=122){
			*(str1+i) = *(str1+i)-32;
		}
		i++;
	}
	puts(str1);
}

sp_char(char *str1){
	int i=0,count=0;
	char ch = *str1;
	while(ch != '\0'){
		ch = *(str1+i);
		if(ch>=0 && ch<=47||ch>=58 && ch<=64||ch>=91 && ch<=96||ch>=123 && ch<=127){
			count++;
		}
		i++;
	}
	printf("the number of speciall charecter in the string : %d \n",count);
}

main(){
	char str1[100],str2[100],c1[100],c2[100];
	int choise,flag=0;
	while(flag ==0){
		printf("\n");
		printf("Enter your choise(1, 2, 3, 4, 5 or 6)\n");
		printf("1. Show adress of each charecter\n");
		printf("2. Concatenates two strings\n");
		printf("3. Compare two strings\n");
		printf("4. Calculate length of the string\n");
		printf("5. Covert all lowercase to uppercase\n");
		printf("6. Count the number of speciall charecter\n");
		printf("7. Exit\n");
		scanf("%d",&choise);
		getchar();
		switch(choise){
			case 1:
				printf("enter a string\n");
				gets(str1);
				adress(&str1);
				break;
			case 2:
				printf("enter the first string\n");
				gets(c1);
				printf("Enter the second string\n");
				gets(c2);
				concat(c1,c2);	
				break;		
			case 3:
				printf("enter the first string\n");
				gets(c1);
				printf("Enter the second string\n");
				gets(c2);
				compare(c1,c2);
				break;	
			case 4:
				printf("enter a string\n");
				gets(str1);
				findLen(&str1);
				break;
			case 5:
				printf("enter a string\n");
				gets(str1);
				uppercase(&str1);
				break;
			case 6:
				printf("enter a string\n");
				gets(str1);
				sp_char(&str1);
				break;
			case 7:
				flag++;
				break;		
		}
	}


	
}
