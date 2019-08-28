#include<stdio.h>

check_viol(char str[100]){
	int num=0,i;
	for(i=0;i<100;i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			num++;
		}
	}
	printf("there are %d viols in the sentense \n",num);
}

check_space(char str[100]){
	int num_space=0,i;
	for(i=0;i<100;i++){
		if(str[i]==' '){
			num_space++;
		}
	}
	printf("there are %d spaces in the sentense \n",num_space);
}
main(){
	
	char str[100];
	printf("enter a sentence \n");
	gets(str);
	check_viol(str);
	check_space(str);
}
